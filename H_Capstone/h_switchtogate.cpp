#include "h_switchtogate.h"
#include "ui_h_switchtogate.h"

H_SwitchToGate::H_SwitchToGate(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::H_SwitchToGate)
{
    ui->setupUi(this);
}

H_SwitchToGate::~H_SwitchToGate()
{
    delete ui;
}
