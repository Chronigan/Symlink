#include "manlinkname.h"
#include "ui_manlinkname.h"

manlinkname::manlinkname(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manlinkname)
{
    ui->setupUi(this);
}

manlinkname::~manlinkname()
{
    delete ui;
}

void manlinkname::RequestName(QString linkname)
{
    ui->manlinkdisplay->setText(linkname);
}

void manlinkname::on_manname_editingFinished()
{
    name = ui->manname->text();
    this->hide();
    ui->manname->clear();
}

QString manlinkname::GetName()
{
    return name;
}

void manlinkname::on_Ok_clicked()
{
    name = ui->manname->text();
    this->hide();
    ui->manname->clear();
}
