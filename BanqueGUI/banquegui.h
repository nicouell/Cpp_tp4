#ifndef BANQUEGUI_H
#define BANQUEGUI_H

#include <QtGui/QMainWindow>
#include "ui_banquegui.h"

class BanqueGUI : public QMainWindow
{
    Q_OBJECT

public:
    BanqueGUI(QWidget *parent = 0);
    ~BanqueGUI();

private:
    Ui::BanqueGUIClass ui;
};

#endif // BANQUEGUI_H
