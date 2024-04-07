#ifndef H_NOOFPEOPLE_H
#define H_NOOFPEOPLE_H

#include <QDialog>

namespace Ui {
class H_NoOfPeople;
}

class H_NoOfPeople : public QDialog
{
    Q_OBJECT

public:
    explicit H_NoOfPeople(QWidget *parent = nullptr);
    ~H_NoOfPeople();

private slots:
    void on_Done_clicked();

private:
    Ui::H_NoOfPeople *ui;
};

#endif // H_NOOFPEOPLE_H
