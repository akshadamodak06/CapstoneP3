#include "h_noofpeople.h"
#include "ui_h_noofpeople.h"
#include "h_appqnc.h"

H_NoOfPeople::H_NoOfPeople(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::H_NoOfPeople)
{
    ui->setupUi(this);
}

H_NoOfPeople::~H_NoOfPeople()
{
    delete ui;
}


void H_NoOfPeople::on_Done_clicked()
{
    int MValue = ui->NoPeople->text().toInt();
    H_appQNC gate ;
    gate.setModal(true) ;
    gate.exec() ;
    hide() ;
}

