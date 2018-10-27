#ifndef COLORWHELLDIALOG_H
#define COLORWHELLDIALOG_H

#include "colorwheel.h"
#include <QDialog>

namespace Ui {
class ColorWhellDialog;
}

class ColorWhellDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ColorWhellDialog(QWidget *parent = nullptr);
    ~ColorWhellDialog();
    ColorWheel *mColorWhell;

private:
    Ui::ColorWhellDialog *ui;
};

#endif // COLORWHELLDIALOG_H
