/********************************************************************************
** Form generated from reading UI file 'module_one.ui'
**
** Created: Sat Apr 11 10:45:20 2015
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MODULE_ONE_H
#define MODULE_ONE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(713, 570);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 30, 631, 491));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(24);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 24, 536, 111));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox->raise();

        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));

        verticalLayout->addWidget(groupBox_3);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\351\252\214\350\257\201\350\241\250\350\276\276\345\274\217\346\230\257\345\220\246\344\270\272\345\221\275\351\242\230\345\205\254\345\274\217", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Dialog", "\345\221\275\351\242\230\345\205\254\345\274\217\347\232\204\345\256\232\344\271\211", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "\342\221\264 \345\215\225\344\270\252\345\221\275\351\242\230\345\217\230\345\205\203\346\230\257\344\270\252\345\221\275\351\242\230\345\205\254\345\274\217\343\200\202", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "\342\221\265 \350\213\245A\346\230\257\345\221\275\351\242\230\345\205\254\345\274\217\357\274\214\345\210\231\357\203\230A\346\230\257\345\221\275\351\242\230\345\205\254\345\274\217\343\200\202", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "\342\221\266 \350\213\245A\345\222\214B\346\230\257\345\221\275\351\242\230\345\205\254\345\274\217\357\274\214\345\210\231(A\342\210\247B)\357\274\214(A\342\210\250B)\357\274\214(A\357\202\256B)\345\222\214(A\357\202\253B)\351\203\275\346\230\257\345\221\275\351\242\230\345\205\254\345\274\217\343\200\202", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog", "\342\221\267 \345\275\223\344\270\224\344\273\205\345\275\223\346\234\211\351\231\220\346\254\241\345\234\260\345\272\224\347\224\250\342\221\264\357\274\214\342\221\265\357\274\214\342\221\266\346\211\200\345\276\227\345\210\260\347\232\204\345\220\253\346\234\211\345\221\275\351\242\230\345\217\230\345\205\203\343\200\201\350\201\224\347\273\223\350\257\215\345\222\214\345\234\206\346\213\254\345\217\267\347\232\204\347\254\246\345\217\267\344\270\262\346\230\257\345\221\275\351\242\230\345\205\254\345\274\217\343\200\202", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Dialog", "\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Dialog", "\347\273\223\346\236\234", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MODULE_ONE_H
