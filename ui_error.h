/********************************************************************************
** Form generated from reading UI file 'error.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERROR_H
#define UI_ERROR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_error
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *error)
    {
        if (error->objectName().isEmpty())
            error->setObjectName(QString::fromUtf8("error"));
        error->resize(305, 201);
        label = new QLabel(error);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 261, 151));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans"));
        label->setFont(font);
        label->setScaledContents(true);
        label->setWordWrap(true);
        pushButton = new QPushButton(error);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 170, 85, 27));

        retranslateUi(error);

        QMetaObject::connectSlotsByName(error);
    } // setupUi

    void retranslateUi(QDialog *error)
    {
        error->setWindowTitle(QApplication::translate("error", "Error!", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("error", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("error", "Okay", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class error: public Ui_error {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERROR_H
