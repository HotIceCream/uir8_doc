/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonAllAccess;
    QPushButton *buttonAdmAccess;
    QPushButton *buttonUserAccess;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(346, 166);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        buttonAllAccess = new QPushButton(centralWidget);
        buttonAllAccess->setObjectName(QString::fromUtf8("buttonAllAccess"));
        buttonAllAccess->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(buttonAllAccess);

        buttonAdmAccess = new QPushButton(centralWidget);
        buttonAdmAccess->setObjectName(QString::fromUtf8("buttonAdmAccess"));
        buttonAdmAccess->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(buttonAdmAccess);

        buttonUserAccess = new QPushButton(centralWidget);
        buttonUserAccess->setObjectName(QString::fromUtf8("buttonUserAccess"));
        buttonUserAccess->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
""));

        verticalLayout->addWidget(buttonUserAccess);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 346, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        buttonAllAccess->setText(QApplication::translate("MainWindow", "\320\224\320\276\321\201\321\202\321\203\320\277 \321\200\320\260\320\267\321\200\320\265\321\210\320\265\320\275 \320\262\321\201\320\265\320\274", 0, QApplication::UnicodeUTF8));
        buttonAdmAccess->setText(QApplication::translate("MainWindow", "\320\224\320\276\321\201\321\202\321\203\320\277 \321\200\320\260\320\267\321\200\320\265\321\210\320\265\320\275 sysadm_u", 0, QApplication::UnicodeUTF8));
        buttonUserAccess->setText(QApplication::translate("MainWindow", "\320\224\320\276\321\201\321\202\321\203\320\277 \321\200\320\260\320\267\321\200\320\265\321\210\320\265\320\275 user_u", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
