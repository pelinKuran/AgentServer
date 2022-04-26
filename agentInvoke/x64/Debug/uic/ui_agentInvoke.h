/********************************************************************************
** Form generated from reading UI file 'agentInvoke.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENTINVOKE_H
#define UI_AGENTINVOKE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_agentInvokeClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QSplitter *splitter_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *address_label;
    QLineEdit *address_lineEdit;
    QSplitter *splitter_2;
    QLabel *port_label;
    QLineEdit *port_lineEdit;
    QPushButton *sendButton;
    QLabel *label;
    QLabel *info_label;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *agentInvokeClass)
    {
        if (agentInvokeClass->objectName().isEmpty())
            agentInvokeClass->setObjectName(QString::fromUtf8("agentInvokeClass"));
        agentInvokeClass->resize(715, 198);
        agentInvokeClass->setStyleSheet(QString::fromUtf8("background-color: rgb(49, 49, 49);"));
        centralWidget = new QWidget(agentInvokeClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        splitter_3 = new QSplitter(groupBox);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(10, 70, 471, 21));
        splitter_3->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        address_label = new QLabel(layoutWidget);
        address_label->setObjectName(QString::fromUtf8("address_label"));

        horizontalLayout_2->addWidget(address_label);

        address_lineEdit = new QLineEdit(layoutWidget);
        address_lineEdit->setObjectName(QString::fromUtf8("address_lineEdit"));

        horizontalLayout_2->addWidget(address_lineEdit);


        horizontalLayout->addLayout(horizontalLayout_2);

        splitter_2 = new QSplitter(layoutWidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        port_label = new QLabel(splitter_2);
        port_label->setObjectName(QString::fromUtf8("port_label"));
        splitter_2->addWidget(port_label);
        port_lineEdit = new QLineEdit(splitter_2);
        port_lineEdit->setObjectName(QString::fromUtf8("port_lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(port_lineEdit->sizePolicy().hasHeightForWidth());
        port_lineEdit->setSizePolicy(sizePolicy);
        splitter_2->addWidget(port_lineEdit);

        horizontalLayout->addWidget(splitter_2);

        splitter_3->addWidget(layoutWidget);
        sendButton = new QPushButton(splitter_3);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 183, 135);\n"
"color: rgb(49, 49, 49);"));
        splitter_3->addWidget(sendButton);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(21, 41, 35, 16));
        info_label = new QLabel(groupBox);
        info_label->setObjectName(QString::fromUtf8("info_label"));
        info_label->setGeometry(QRect(62, 41, 211, 16));
        info_label->setStyleSheet(QString::fromUtf8("font: 75 8pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 183, 135);"));

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        agentInvokeClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(agentInvokeClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        agentInvokeClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(agentInvokeClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 715, 21));
        agentInvokeClass->setMenuBar(menuBar);

        retranslateUi(agentInvokeClass);

        QMetaObject::connectSlotsByName(agentInvokeClass);
    } // setupUi

    void retranslateUi(QMainWindow *agentInvokeClass)
    {
        agentInvokeClass->setWindowTitle(QCoreApplication::translate("agentInvokeClass", "agentInvoke", nullptr));
        groupBox->setTitle(QCoreApplication::translate("agentInvokeClass", "Connect Server", nullptr));
        address_label->setText(QCoreApplication::translate("agentInvokeClass", "Address", nullptr));
        port_label->setText(QCoreApplication::translate("agentInvokeClass", "Port", nullptr));
        sendButton->setText(QCoreApplication::translate("agentInvokeClass", "Connect", nullptr));
        label->setText(QCoreApplication::translate("agentInvokeClass", "Status:", nullptr));
        info_label->setText(QCoreApplication::translate("agentInvokeClass", "Not Connected!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class agentInvokeClass: public Ui_agentInvokeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENTINVOKE_H
