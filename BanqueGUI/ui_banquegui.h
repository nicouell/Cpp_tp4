/********************************************************************************
** Form generated from reading UI file 'banquegui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANQUEGUI_H
#define UI_BANQUEGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BanqueGUIClass
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BanqueGUIClass)
    {
        if (BanqueGUIClass->objectName().isEmpty())
            BanqueGUIClass->setObjectName(QString::fromUtf8("BanqueGUIClass"));
        BanqueGUIClass->resize(800, 600);
        centralwidget = new QWidget(BanqueGUIClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BanqueGUIClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BanqueGUIClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        BanqueGUIClass->setMenuBar(menubar);
        statusbar = new QStatusBar(BanqueGUIClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BanqueGUIClass->setStatusBar(statusbar);

        retranslateUi(BanqueGUIClass);

        QMetaObject::connectSlotsByName(BanqueGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *BanqueGUIClass)
    {
        BanqueGUIClass->setWindowTitle(QApplication::translate("BanqueGUIClass", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BanqueGUIClass: public Ui_BanqueGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANQUEGUI_H
