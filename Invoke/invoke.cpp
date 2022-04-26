#include "invoke.h"
#include <iostream>
#include <QPushButton>
#include <QDebug>
#include <QIODevice>
#include <QtNetwork/qhostaddress.h>
Invoke::Invoke(QWidget* parent)
	: QMainWindow(), m_server(this)
{
	ui.setupUi(this);
	m_socket = new QTcpSocket(this);
	m_fileName = "invokePaths.ini";
	m_settings = new QSettings(m_fileName, QSettings::IniFormat);

	//UI
	QWidget::connect(ui.runGateway, &QPushButton::clicked,
		this, &Invoke::on_runGatewayClicked);
	QWidget::connect(ui.runStage, &QPushButton::clicked,
		this, &Invoke::on_runStageClicked);
	QWidget::connect(ui.runP3, &QPushButton::clicked,
		this, &Invoke::on_runP3Clicked);
	//connect --> start server
	QWidget::connect(ui.startServer, &QPushButton::clicked,
		this, &Invoke::on_startServerClicked);
	isFileExist();


}

//get new client 
void::Invoke::newConnection()
{
	m_socket = m_server.nextPendingConnection();
	m_clients.push_back(m_socket);
	m_socket->write("Connected!\n");
	m_socket->flush();
}

//send messages to client
void Invoke::sendMessages(QString p_message, QString p_appID)
{
	QDataStream t_socketStream(m_socket);
	p_message += "\0";
	t_socketStream.setVersion(QDataStream::Qt_5_15);
	QByteArray byteArray = p_message.toUtf8();
	byteArray.prepend(p_appID.toUtf8());
	t_socketStream << byteArray;
}

void Invoke::onReadyRead()
{
	QTcpSocket* sender = static_cast<QTcpSocket*> (QObject::sender());
	QByteArray t_data = sender->readAll();
	for (QTcpSocket* socket : m_sockets) {
		if (socket != sender)
			socket->write(QByteArray::fromStdString(sender->peerAddress().toString().toStdString() + ": " + t_data.toStdString()));
	}
}

#pragma region send program path to client
void Invoke::on_runGatewayClicked()
{
	m_programPath = ui.gateway_lineEdit->text();
	m_settings->setValue("Gateway/path", m_programPath);
	m_settings->setValue("Gateway/id", "1");
	m_settings->sync();
	sendMessages(m_programPath, "1");

}


void Invoke::on_runStageClicked()
{
	m_programPath = ui.stage_lineEdit->text();
	m_settings->setValue("Stage/path", m_programPath);
	m_settings->setValue("Stage/id", "2");
	m_settings->sync();
	sendMessages(m_programPath, "2");

}

void Invoke::on_runP3Clicked()
{
	m_programPath = ui.P3_lineEdit->text();
	m_settings->setValue("Prepar3D/path", m_programPath);
	m_settings->setValue("Prepar3D/id", "3");
	m_settings->sync();
	sendMessages(m_programPath, "3");
}
#pragma endregion

void Invoke::on_startServerClicked()
{
	if (connect(&m_server, &QTcpServer::newConnection, this, &Invoke::newConnection)) {
		ui.serverConnect->setText("Online");
		if (!m_server.isListening())
			m_server.listen(QHostAddress::Any, 4242);

	}
	else
		ui.serverConnect->setText("Server Not Started");
}

bool Invoke::isFileExist()
{
	if (QFile::exists(m_fileName))
	{
		qDebug() << "File exists. \n";

		if (!(m_settings->value("Gateway/path").toString().isEmpty()))
			ui.gateway_lineEdit->setText(m_settings->value("Gateway/path").toByteArray().constData());

		if (!(m_settings->value("Stage/path").toString().isEmpty()))
			ui.stage_lineEdit->setText(m_settings->value("Stage/path").toByteArray().constData());

		if (!(m_settings->value("Prepar3D/path").toString().isEmpty()))
			ui.P3_lineEdit->setText(m_settings->value("Prepar3D/path").toByteArray().constData());

		return true;
	}
	else
	{
		return false;
	}
}

Invoke::~Invoke()
{
	m_socket->write("Server Offline");
	m_socket->flush();
	m_socket->close();
	m_socket->deleteLater();
	m_server.close();
	m_server.deleteLater();
}