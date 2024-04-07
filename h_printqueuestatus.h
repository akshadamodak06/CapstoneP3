#ifndef H_PRINTQUEUESTATUS_H
#define H_PRINTQUEUESTATUS_H

#include <QDialog>

namespace Ui {
class H_PrintQueueStatus;
}

class H_PrintQueueStatus : public QDialog
{
    Q_OBJECT

public:
    explicit H_PrintQueueStatus(QWidget *parent = nullptr);
    ~H_PrintQueueStatus();
    void appendSentence(const QString& sentence) ;
    void onSentenceReceived(const QString& sentence) ;

private:
    Ui::H_PrintQueueStatus *ui;
};

#endif // H_PRINTQUEUESTATUS_H
