#include "mkdirectory.h"
#include "ui_mkdirectory.h"

mkdirectory::mkdirectory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mkdirectory)
{
    ui->setupUi(this);
    error.setModal(true);
}

mkdirectory::~mkdirectory()
{
    delete ui;
}
void mkdirectory::GetDirectory(QString dir)
{
     directory = dir;
}

void mkdirectory::on_butonYes_clicked()
{
    QDir maker;
    if (!maker.mkpath(directory))
        error.exec();
    this->close();
}

void mkdirectory::on_buttonNo_clicked()
{
    this->close();
}
