#ifndef MKDIRECTORY_H
#define MKDIRECTORY_H

#include <QDialog>
#include <QDir>
#include <dirresult.h>

namespace Ui {
class mkdirectory;
}

class mkdirectory : public QDialog
{
    Q_OBJECT

public:
    explicit mkdirectory(QWidget *parent = 0);
    ~mkdirectory();
    void GetDirectory(QString dir);

private slots:
    void on_butonYes_clicked();

    void on_buttonNo_clicked();

private:
    Ui::mkdirectory *ui;
    QString directory;
    dirResult error;
};

#endif // MKDIRECTORY_H
