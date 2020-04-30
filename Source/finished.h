#ifndef FINISHED_H
#define FINISHED_H

#include <QDialog>

namespace Ui {
class finished;
}

class finished : public QDialog
{
    Q_OBJECT

public:
    explicit finished(QWidget *parent = 0);
    ~finished();

    bool execute();

private slots:


    void on_buttonReturn_clicked();

    void on_buttonDone_clicked();


private:
    Ui::finished *ui;
    bool close;                 //To close the application or not
    bool selected;              //If a selection Has Been made
};

#endif // FINISHED_H
