#include "h_switchinfofg.h"
#include "ui_h_switchinfofg.h"
#include "h_switchtogate.h"

H_SwitchInfoFG::H_SwitchInfoFG(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::H_SwitchInfoFG)
{
    ui->setupUi(this);
}

H_SwitchInfoFG::~H_SwitchInfoFG()
{
    delete ui;
}

void H_SwitchInfoFG::on_Yes_clicked()
{
    int no_ppl = ui->GateInfo->text().toInt();
    H_SwitchToGate gateno ;
    gateno.setModal(true) ;
    gateno.exec() ;
    hide() ;
}


void H_SwitchInfoFG::on_No_clicked()
{
    QMessageBox::warning(this, "warning" , "Sorry, ypu cannot switch queues!") ;
    hide() ;
}

