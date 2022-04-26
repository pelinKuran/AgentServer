/********************************************************************************
** Form generated from reading UI file 'invoke.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVOKE_H
#define UI_INVOKE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InvokeClass
{
public:
    QWidget *centralWidget;
    QGroupBox *connectRemote_GroupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *gateway_label;
    QLabel *P3_label;
    QLabel *Stage_label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *gateway_lineEdit;
    QPushButton *runGateway;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *P3_lineEdit;
    QPushButton *runP3;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *stage_lineEdit;
    QPushButton *runStage;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *serverConnect;
    QPushButton *startServer;
    QSplitter *splitter_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *InvokeClass)
    {
        if (InvokeClass->objectName().isEmpty())
            InvokeClass->setObjectName(QString::fromUtf8("InvokeClass"));
        InvokeClass->resize(539, 408);
        InvokeClass->setStyleSheet(QString::fromUtf8("background-color: rgb(104, 91, 126);\n"
"background-color: rgb(35, 35, 35);\n"
"color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(InvokeClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        connectRemote_GroupBox = new QGroupBox(centralWidget);
        connectRemote_GroupBox->setObjectName(QString::fromUtf8("connectRemote_GroupBox"));
        connectRemote_GroupBox->setGeometry(QRect(50, 150, 421, 201));
        connectRemote_GroupBox->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(connectRemote_GroupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 50, 298, 93));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gateway_label = new QLabel(layoutWidget);
        gateway_label->setObjectName(QString::fromUtf8("gateway_label"));
        gateway_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(gateway_label);

        P3_label = new QLabel(layoutWidget);
        P3_label->setObjectName(QString::fromUtf8("P3_label"));
        P3_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(P3_label);

        Stage_label = new QLabel(layoutWidget);
        Stage_label->setObjectName(QString::fromUtf8("Stage_label"));
        Stage_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));

        verticalLayout_3->addWidget(Stage_label);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gateway_lineEdit = new QLineEdit(layoutWidget);
        gateway_lineEdit->setObjectName(QString::fromUtf8("gateway_lineEdit"));

        horizontalLayout_3->addWidget(gateway_lineEdit);

        runGateway = new QPushButton(layoutWidget);
        runGateway->setObjectName(QString::fromUtf8("runGateway"));
        runGateway->setStyleSheet(QString::fromUtf8("color: rgb(49, 49, 49);\n"
"background-color: rgb(255, 183, 135);"));

        horizontalLayout_3->addWidget(runGateway);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        P3_lineEdit = new QLineEdit(layoutWidget);
        P3_lineEdit->setObjectName(QString::fromUtf8("P3_lineEdit"));

        horizontalLayout_4->addWidget(P3_lineEdit);

        runP3 = new QPushButton(layoutWidget);
        runP3->setObjectName(QString::fromUtf8("runP3"));
        runP3->setStyleSheet(QString::fromUtf8("color: rgb(49, 49, 49);\n"
"background-color: rgb(255, 183, 135);"));

        horizontalLayout_4->addWidget(runP3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        stage_lineEdit = new QLineEdit(layoutWidget);
        stage_lineEdit->setObjectName(QString::fromUtf8("stage_lineEdit"));

        horizontalLayout_5->addWidget(stage_lineEdit);

        runStage = new QPushButton(layoutWidget);
        runStage->setObjectName(QString::fromUtf8("runStage"));
        runStage->setStyleSheet(QString::fromUtf8("color: rgb(49, 49, 49);\n"
"background-color: rgb(255, 183, 135);"));

        horizontalLayout_5->addWidget(runStage);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(verticalLayout);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 50, 421, 61));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(65, 65, 65);\n"
"font: 8pt \"Nirmala UI Semilight\";"));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 20, 261, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(label);

        serverConnect = new QLabel(layoutWidget1);
        serverConnect->setObjectName(QString::fromUtf8("serverConnect"));
        serverConnect->setStyleSheet(QString::fromUtf8("font: 10pt \"Nirmala UI Semilight\";\n"
""));

        horizontalLayout->addWidget(serverConnect);

        startServer = new QPushButton(layoutWidget1);
        startServer->setObjectName(QString::fromUtf8("startServer"));
        startServer->setStyleSheet(QString::fromUtf8("color: rgb(49, 49, 49);\n"
"background-color: rgb(255, 183, 135);"));

        horizontalLayout->addWidget(startServer);

        splitter_3 = new QSplitter(centralWidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(30, 0, 0, 0));
        splitter_3->setOrientation(Qt::Vertical);
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 0, 2, 2));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        InvokeClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(InvokeClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        InvokeClass->setStatusBar(statusBar);

        retranslateUi(InvokeClass);

        QMetaObject::connectSlotsByName(InvokeClass);
    } // setupUi

    void retranslateUi(QMainWindow *InvokeClass)
    {
        InvokeClass->setWindowTitle(QCoreApplication::translate("InvokeClass", "Invoke", nullptr));
        connectRemote_GroupBox->setTitle(QCoreApplication::translate("InvokeClass", "Run Remote Apps", nullptr));
        gateway_label->setText(QCoreApplication::translate("InvokeClass", "Gateway Path", nullptr));
        P3_label->setText(QCoreApplication::translate("InvokeClass", "Prepar3D Path", nullptr));
        Stage_label->setText(QCoreApplication::translate("InvokeClass", "Stage Path", nullptr));
        runGateway->setText(QCoreApplication::translate("InvokeClass", "run", nullptr));
        runP3->setText(QCoreApplication::translate("InvokeClass", "run", nullptr));
        runStage->setText(QCoreApplication::translate("InvokeClass", "run", nullptr));
        groupBox->setTitle(QCoreApplication::translate("InvokeClass", "Server", nullptr));
        label->setText(QCoreApplication::translate("InvokeClass", "Server State:", nullptr));
        serverConnect->setText(QCoreApplication::translate("InvokeClass", "Offline", nullptr));
        startServer->setText(QCoreApplication::translate("InvokeClass", "start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InvokeClass: public Ui_InvokeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVOKE_H
