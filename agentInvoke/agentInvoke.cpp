#include "agentInvoke.h"

agentInvoke::agentInvoke(QWidget* parent)
	: QMainWindow()
{
	ui.setupUi(this);
	_socket = new QTcpSocket(this);
	connect(_socket, &QTcpSocket::readyRead, this, &agentInvoke::onReadyRead);
	QObject::connect(ui.sendButton, &QPushButton::clicked, this, &agentInvoke::on_sendButtonClicked);
}

#pragma region Connect to Host
void agentInvoke::on_sendButtonClicked()
{
	m_address = ui.address_lineEdit->text();
	m_port = ui.port_lineEdit->text();
	qint16 t_convPort = m_port.toUShort();

	if (!(m_address.isEmpty() || m_port.isEmpty())) {
		_socket->connectToHost(QHostAddress(m_address), qint16(t_convPort));

		if (_socket->waitForConnected(3000))
			qDebug() << "Connection successful! \n";
		else{ 
			qDebug() << "Connection unsuccessful! \n";
			ui.info_label->setText("Connection failed!");

		}
	}
	else
	{
		qDebug() << "address or port cannot be empty.\n";
	}

}
#pragma endregion

void agentInvoke::onReadyRead()
{
	QByteArray t_data = _socket->readAll();
	qDebug() << t_data;
	ui.info_label->setText(t_data);
	readMessage(t_data);
}

void agentInvoke::readMessage(QByteArray p_message)
{
	QString t_message = p_message.mid(4);
	QString t_id = t_message.mid(0, 1);
	auto a = p_message.size();
	QString t_path = t_message.mid(1, (t_message.size() - 1));
	QProcess* t_process = new QProcess();
	t_process->start(t_path);
	qDebug() << t_message << "\n" << t_id << "\n" << t_path << "\n";
}

