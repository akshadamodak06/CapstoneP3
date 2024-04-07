#ifndef H_SWITCHINFOFG_H
#define H_SWITCHINFOFG_H

#include <QDialog>

namespace Ui {
class H_SwitchInfoFG;
}

class H_SwitchInfoFG : public QDialog
{
    Q_OBJECT

public:
    explicit H_SwitchInfoFG(QWidget *parent = nullptr);
    ~H_SwitchInfoFG();

private:
    Ui::H_SwitchInfoFG *ui;
};

#endif // H_SWITCHINFOFG_H
