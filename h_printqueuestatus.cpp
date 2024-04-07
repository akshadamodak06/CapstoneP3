#include "h_printqueuestatus.h"
#include "ui_h_printqueuestatus.h"

H_PrintQueueStatus::H_PrintQueueStatus(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::H_PrintQueueStatus)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);
    onSentenceReceived("Hello! How ya doin'?");
}

H_PrintQueueStatus::~H_PrintQueueStatus()
{
    delete ui;
}

void H_PrintQueueStatus::appendSentence(const QString& sentence) {
    ui->textEdit->append(sentence) ;
}

void H_PrintQueueStatus::onSentenceReceived(const QString& sentence){
    appendSentence(sentence) ;
}
