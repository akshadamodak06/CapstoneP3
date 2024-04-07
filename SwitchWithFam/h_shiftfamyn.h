#ifndef H_SHIFTFAMYN_H
#define H_SHIFTFAMYN_H

#include <QDialog>

namespace Ui {
class H_ShiftFamYN;
}

class H_ShiftFamYN : public QDialog
{
    Q_OBJECT

public:
    explicit H_ShiftFamYN(QWidget *parent = nullptr);
    ~H_ShiftFamYN();

private:
    Ui::H_ShiftFamYN *ui;
};

#endif // H_SHIFTFAMYN_H
