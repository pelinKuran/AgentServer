#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_invoke.h"
#include <QProcess>
#include <QTabWidget>
#include <QtNetwork/qtcpsocket.h>
#include <QtNetwork/qtcpserver.h>
#include <QSettings>
#include <qfile.h>
class Invoke : public QMainWindow
{
	Q_OBJECT
	Q_DISABLE_COPY(Invoke);

public:
	Invoke(QWidget* parent = Q_NULLPTR);
	~Invoke();

public slots:
	void newConnection();

private:
	QObject* m_parent;
	QString m_programPath;
	QStringList m_arguments;
	QString m_ip = "";
	Ui::InvokeClass ui;
	//QTabWidget* tabWidget;
	QTcpSocket* m_socket = nullptr;
	QTcpServer m_server;
	QList<QTcpSocket*> m_sockets;
	QVector<QTcpSocket*> m_clients;
	QSettings* m_settings;
	QString m_fileName;
	bool isFileExist();

private slots:
	void on_runGatewayClicked();
	void on_runStageClicked();
	void on_runP3Clicked();
	void onReadyRead();
	void on_startServerClicked();
	void sendMessages(QString p_message, QString p_appID);

};
