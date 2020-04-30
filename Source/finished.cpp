#include "finished.h"
#include "ui_finished.h"

finished::finished(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::finished)
{
    ui->setupUi(this);
    close = false;
}

finished::~finished()
{
    delete ui;
}

bool finished::execute()
{     
    return close;
}

void finished::on_buttonReturn_clicked()
{
    close = false;
    this->hide();
}

void finished::on_buttonDone_clicked()
{
    close = true;
    this->hide();
}

