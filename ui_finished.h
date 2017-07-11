/********************************************************************************
** Form generated from reading UI file 'finished.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINISHED_H
#define UI_FINISHED_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_finished
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonReturn;
    QPushButton *buttonDone;

    void setupUi(QDialog *finished)
    {
        if (finished->objectName().isEmpty())
            finished->setObjectName(QString::fromUtf8("finished"));
        finished->resize(219, 104);
        QFont font;
        font.setKerning(true);
        finished->setFont(font);
        finished->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(finished);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 201, 86));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Noto Sans"));
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::PreferAntialias);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("label{\n"
"font-weight 300\n"
"}"));
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        label->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonReturn = new QPushButton(layoutWidget);
        buttonReturn->setObjectName(QString::fromUtf8("buttonReturn"));

        horizontalLayout->addWidget(buttonReturn);

        buttonDone = new QPushButton(layoutWidget);
        buttonDone->setObjectName(QString::fromUtf8("buttonDone"));

        horizontalLayout->addWidget(buttonDone);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(finished);

        QMetaObject::connectSlotsByName(finished);
    } // setupUi

    void retranslateUi(QDialog *finished)
    {
        finished->setWindowTitle(QApplication::translate("finished", "Done!", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("finished", "Links created Successfully! Click return to choose another directory or click done to exit the program", 0, QApplication::UnicodeUTF8));
        buttonReturn->setText(QApplication::translate("finished", "Return", 0, QApplication::UnicodeUTF8));
        buttonDone->setText(QApplication::translate("finished", "Done", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class finished: public Ui_finished {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINISHED_H
