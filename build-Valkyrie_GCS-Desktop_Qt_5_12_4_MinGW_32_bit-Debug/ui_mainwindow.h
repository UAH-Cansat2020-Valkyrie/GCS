/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionCredits;
    QAction *actionSave_As;
    QAction *actionSave;
    QAction *actionExit;
    QAction *action9600;
    QAction *action9600_2;
    QAction *action2;
    QAction *action1;
    QAction *action0;
    QAction *actionNone;
    QAction *actionOdd;
    QAction *actionEven;
    QAction *actionMark;
    QAction *actionSpace;
    QAction *actionReset_Defaults;
    QAction *actionToggle_Darkmode;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuSerial_Settings;
    QMenu *menuPort;
    QMenu *menuBaud_Rate;
    QMenu *menuStop_Bits;
    QMenu *menuParity;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1270, 720);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionCredits = new QAction(MainWindow);
        actionCredits->setObjectName(QString::fromUtf8("actionCredits"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        action9600 = new QAction(MainWindow);
        action9600->setObjectName(QString::fromUtf8("action9600"));
        action9600_2 = new QAction(MainWindow);
        action9600_2->setObjectName(QString::fromUtf8("action9600_2"));
        action2 = new QAction(MainWindow);
        action2->setObjectName(QString::fromUtf8("action2"));
        action1 = new QAction(MainWindow);
        action1->setObjectName(QString::fromUtf8("action1"));
        action0 = new QAction(MainWindow);
        action0->setObjectName(QString::fromUtf8("action0"));
        actionNone = new QAction(MainWindow);
        actionNone->setObjectName(QString::fromUtf8("actionNone"));
        actionOdd = new QAction(MainWindow);
        actionOdd->setObjectName(QString::fromUtf8("actionOdd"));
        actionEven = new QAction(MainWindow);
        actionEven->setObjectName(QString::fromUtf8("actionEven"));
        actionMark = new QAction(MainWindow);
        actionMark->setObjectName(QString::fromUtf8("actionMark"));
        actionSpace = new QAction(MainWindow);
        actionSpace->setObjectName(QString::fromUtf8("actionSpace"));
        actionReset_Defaults = new QAction(MainWindow);
        actionReset_Defaults->setObjectName(QString::fromUtf8("actionReset_Defaults"));
        actionToggle_Darkmode = new QAction(MainWindow);
        actionToggle_Darkmode->setObjectName(QString::fromUtf8("actionToggle_Darkmode"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1270, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuSerial_Settings = new QMenu(menubar);
        menuSerial_Settings->setObjectName(QString::fromUtf8("menuSerial_Settings"));
        menuPort = new QMenu(menuSerial_Settings);
        menuPort->setObjectName(QString::fromUtf8("menuPort"));
        menuBaud_Rate = new QMenu(menuSerial_Settings);
        menuBaud_Rate->setObjectName(QString::fromUtf8("menuBaud_Rate"));
        menuStop_Bits = new QMenu(menuSerial_Settings);
        menuStop_Bits->setObjectName(QString::fromUtf8("menuStop_Bits"));
        menuParity = new QMenu(menuSerial_Settings);
        menuParity->setObjectName(QString::fromUtf8("menuParity"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuSerial_Settings->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuView->addAction(actionToggle_Darkmode);
        menuSerial_Settings->addAction(menuPort->menuAction());
        menuSerial_Settings->addAction(menuBaud_Rate->menuAction());
        menuSerial_Settings->addAction(menuStop_Bits->menuAction());
        menuSerial_Settings->addAction(menuParity->menuAction());
        menuSerial_Settings->addSeparator();
        menuSerial_Settings->addAction(actionReset_Defaults);
        menuPort->addSeparator();
        menuBaud_Rate->addAction(action9600);
        menuBaud_Rate->addAction(action9600_2);
        menuStop_Bits->addAction(action2);
        menuStop_Bits->addAction(action1);
        menuStop_Bits->addAction(action0);
        menuParity->addAction(actionNone);
        menuParity->addAction(actionOdd);
        menuParity->addAction(actionEven);
        menuParity->addAction(actionMark);
        menuParity->addAction(actionSpace);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionCredits);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "About", nullptr));
        actionCredits->setText(QApplication::translate("MainWindow", "Credits", nullptr));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As              ctrl+shift+s", nullptr));
        actionSave_As->setIconText(QApplication::translate("MainWindow", "Save As              ctrl+shift+s", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave_As->setToolTip(QApplication::translate("MainWindow", " (ctrl+shift+s)", nullptr));
#endif // QT_NO_TOOLTIP
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "Save (ctrl+s)", nullptr));
#endif // QT_NO_TOOLTIP
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("MainWindow", "Exit (Ctrl+Q)", nullptr));
#endif // QT_NO_TOOLTIP
        action9600->setText(QApplication::translate("MainWindow", "115200", nullptr));
        action9600_2->setText(QApplication::translate("MainWindow", "9600", nullptr));
        action2->setText(QApplication::translate("MainWindow", "2", nullptr));
        action1->setText(QApplication::translate("MainWindow", "1", nullptr));
        action0->setText(QApplication::translate("MainWindow", "0", nullptr));
        actionNone->setText(QApplication::translate("MainWindow", "None", nullptr));
        actionOdd->setText(QApplication::translate("MainWindow", "Odd", nullptr));
        actionEven->setText(QApplication::translate("MainWindow", "Even", nullptr));
        actionMark->setText(QApplication::translate("MainWindow", "Mark", nullptr));
        actionSpace->setText(QApplication::translate("MainWindow", "Space", nullptr));
        actionReset_Defaults->setText(QApplication::translate("MainWindow", "Reset Defaults", nullptr));
        actionToggle_Darkmode->setText(QApplication::translate("MainWindow", "Toggle Darkmode", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "View", nullptr));
        menuSerial_Settings->setTitle(QApplication::translate("MainWindow", "Serial Settings", nullptr));
        menuPort->setTitle(QApplication::translate("MainWindow", "Port", nullptr));
        menuBaud_Rate->setTitle(QApplication::translate("MainWindow", "Baud Rate", nullptr));
        menuStop_Bits->setTitle(QApplication::translate("MainWindow", "Stop Bits", nullptr));
        menuParity->setTitle(QApplication::translate("MainWindow", "Parity", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
