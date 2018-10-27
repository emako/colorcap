#include "colorwhelldialog.h"
#include "ui_colorwhelldialog.h"

ColorWhellDialog::ColorWhellDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ColorWhellDialog)
{
    ui->setupUi(this);
    mColorWhell = ui->colorwhell;
    this->setWindowTitle("ColorWhell");
    this->setWindowIcon(QIcon(":res/art.ico"));
}

ColorWhellDialog::~ColorWhellDialog()
{
    delete ui;
}
