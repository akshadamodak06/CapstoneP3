#include "h_famgroupyn.h"
#include "ui_h_famgroupyn.h"
#include "h_appqnc.h"

H_FamGroupYN::H_FamGroupYN(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::H_FamGroupYN)
{
    ui->setupUi(this);
}

H_FamGroupYN::~H_FamGroupYN()
{
    delete ui;
}



void H_FamGroupYN::on_Yes_clicked()
{
    H_appQNC gate ;
    gate.setModal(true) ;
    gate.exec() ;
    hide() ;
}


void H_FamGroupYN::on_No_clicked()
{
    H_appQNC gate ;
    gate.setModal(true) ;
    gate.exec() ;
    hide() ;
}

