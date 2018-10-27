#include "yuvdialog.h"
#include "ui_yuvdialog.h"

YuvDialog::YuvDialog(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::YuvDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Yuv");
    this->setWindowIcon(QIcon(":res/yuv.ico"));
}

YuvDialog::~YuvDialog()
{
    delete ui;
}

void YuvDialog::saveYuv(void)
{
    y = ui->y_yuvBox->value();
    u = ui->u_yuvBox->value();
    v = ui->v_yuvBox->value();
}

void YuvDialog::setYuv(int y, int u, int v)
{
    ui->y_yuvBox->setValue(y);
    ui->u_yuvBox->setValue(u);
    ui->v_yuvBox->setValue(v);
}

void YuvDialog::setGroupTitle(QString title)
{
    ui->yuvgroupBox->setTitle(title);
}
