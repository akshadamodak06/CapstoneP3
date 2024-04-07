#include "h_shiftfamyn.h"
#include "ui_h_shiftfamyn.h"
#include "h_switchinfofg.h"

H_ShiftFamYN::H_ShiftFamYN(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::H_ShiftFamYN)
{
    ui->setupUi(this);
}

H_ShiftFamYN::~H_ShiftFamYN()
{
    delete ui;
}



void H_ShiftFamYN::on_Yes_clicked()
{
    H_SwitchInfoFG info ;
    info.setModal(true) ;
    info.exec() ;
    hide() ;
}

