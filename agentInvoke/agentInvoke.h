#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_agentInvoke.h"
#include <QProcess>
#include <QTabWidget>
#include <QtNetwork/qtcpsocket.h>
#include <QtNetwork/qhostaddress.h>
#include <QDebug>

class agentInvoke : public QMainWindow
{
	Q_OBJECT
	Q_DISABLE_COPY(agentInvoke);
public:
	agentInvoke(QWidget* parent = Q_NULLPTR);

public slots:
	void onReadyRead();

private:
	Ui::agentInvokeClass ui;
	QTcpSocket* _socket = nullptr;
	QString m_address, m_port;
	void readMessage(QByteArray p_message);

private slots:
	void on_sendButtonClicked();

};
