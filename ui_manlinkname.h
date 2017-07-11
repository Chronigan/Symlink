/********************************************************************************
** Form generated from reading UI file 'manlinkname.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANLINKNAME_H
#define UI_MANLINKNAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manlinkname
{
public:
    QPushButton *Ok;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *instructions;
    QVBoxLayout *verticalLayout;
    QLabel *manlinkdisplay;
    QLineEdit *manname;

    void setupUi(QDialog *manlinkname)
    {
        if (manlinkname->objectName().isEmpty())
            manlinkname->setObjectName(QString::fromUtf8("manlinkname"));
        manlinkname->resize(400, 123);
        Ok = new QPushButton(manlinkname);
        Ok->setObjectName(QString::fromUtf8("Ok"));
        Ok->setGeometry(QRect(160, 90, 85, 27));
        layoutWidget = new QWidget(manlinkname);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 381, 77));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        instructions = new QLabel(layoutWidget);
        instructions->setObjectName(QString::fromUtf8("instructions"));

        verticalLayout_2->addWidget(instructions);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        manlinkdisplay = new QLabel(layoutWidget);
        manlinkdisplay->setObjectName(QString::fromUtf8("manlinkdisplay"));
        manlinkdisplay->setWordWrap(true);

        verticalLayout->addWidget(manlinkdisplay);

        manname = new QLineEdit(layoutWidget);
        manname->setObjectName(QString::fromUtf8("manname"));

        verticalLayout->addWidget(manname);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(manlinkname);

        QMetaObject::connectSlotsByName(manlinkname);
    } // setupUi

    void retranslateUi(QDialog *manlinkname)
    {
        manlinkname->setWindowTitle(QApplication::translate("manlinkname", "Manually Name", 0, QApplication::UnicodeUTF8));
        Ok->setText(QApplication::translate("manlinkname", "Ok", 0, QApplication::UnicodeUTF8));
        instructions->setText(QApplication::translate("manlinkname", "Please enter the name for the link to", 0, QApplication::UnicodeUTF8));
        manlinkdisplay->setText(QApplication::translate("manlinkname", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class manlinkname: public Ui_manlinkname {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANLINKNAME_H
