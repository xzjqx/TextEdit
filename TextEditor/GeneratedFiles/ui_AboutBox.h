/********************************************************************************
** Form generated from reading UI file 'AboutBox.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTBOX_H
#define UI_ABOUTBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutBox
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *AboutBox)
    {
        if (AboutBox->objectName().isEmpty())
            AboutBox->setObjectName(QStringLiteral("AboutBox"));
        AboutBox->resize(544, 250);
        AboutBox->setMinimumSize(QSize(544, 250));
        AboutBox->setMaximumSize(QSize(544, 250));
        verticalLayout = new QVBoxLayout(AboutBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(AboutBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(20);
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        label = new QLabel(AboutBox);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(AboutBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);


        retranslateUi(AboutBox);

        QMetaObject::connectSlotsByName(AboutBox);
    } // setupUi

    void retranslateUi(QWidget *AboutBox)
    {
        AboutBox->setWindowTitle(QApplication::translate("AboutBox", "AboutBox", Q_NULLPTR));
        label_4->setText(QApplication::translate("AboutBox", "This is a simple text editor.", Q_NULLPTR));
        label->setText(QApplication::translate("AboutBox", "<html><head/><body><p align=\"center\">Author: Xiao Jian</p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("AboutBox", "<html><head/><body><p align=\"center\">Built by: VS2015</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutBox: public Ui_AboutBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTBOX_H
