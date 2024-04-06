#ifndef H_SWITCHTOGATE_H
#define H_SWITCHTOGATE_H

#include <QDialog>

namespace Ui {
class H_SwitchToGate;
}

class H_SwitchToGate : public QDialog
{
    Q_OBJECT

public:
    explicit H_SwitchToGate(QWidget *parent = nullptr);
    ~H_SwitchToGate();

private:
    Ui::H_SwitchToGate *ui;
};

#endif // H_SWITCHTOGATE_H
