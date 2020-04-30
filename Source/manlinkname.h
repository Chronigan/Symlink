#ifndef MANLINKNAME_H
#define MANLINKNAME_H

#include <QDialog>

namespace Ui {
class manlinkname;
}

class manlinkname : public QDialog
{
    Q_OBJECT

public:
    explicit manlinkname(QWidget *parent = 0);
    ~manlinkname();
    QString GetName();
    void RequestName(QString linkname);

private slots:
    void on_manname_editingFinished();

    void on_Ok_clicked();

private:
    QString name;               //link name
    Ui::manlinkname *ui;
};

#endif // MANLINKNAME_H
