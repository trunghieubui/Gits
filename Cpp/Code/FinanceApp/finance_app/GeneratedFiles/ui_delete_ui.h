/********************************************************************************
** Form generated from reading UI file 'delete_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_UI_H
#define UI_DELETE_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delete_ui
{
public:
    QComboBox *box_search;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *delete_ui)
    {
        if (delete_ui->objectName().isEmpty())
            delete_ui->setObjectName(QStringLiteral("delete_ui"));
        delete_ui->resize(222, 90);
        box_search = new QComboBox(delete_ui);
        box_search->setObjectName(QStringLiteral("box_search"));
        box_search->setGeometry(QRect(10, 10, 111, 31));
        box_search->setStyleSheet(QLatin1String("#box_search{\n"
"font: 75 12pt \"Times New Roman\";\n"
"color:#333;\n"
"border: 2px solid #555;\n"
"\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.5, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 70px;\n"
"\n"
"background-color:rgb(255, 255, 255);\n"
"}"));
        okButton = new QPushButton(delete_ui);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(130, 10, 84, 31));
        okButton->setStyleSheet(QLatin1String("#okButton{\n"
"font: 75 12pt \"Times New Roman\";\n"
"color:#333;\n"
"border: 2px solid #555;\n"
"border-radius: 13px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.5, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 70px;\n"
"\n"
"background-color: rgb(85, 255, 0);\n"
"}"));
        cancelButton = new QPushButton(delete_ui);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(130, 50, 84, 31));
        cancelButton->setStyleSheet(QLatin1String("#cancelButton{\n"
"font: 75 12pt \"Times New Roman\";\n"
"color:#333;\n"
"border: 2px solid #555;\n"
"border-radius: 13px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.5, stop: 0 #fff, stop: 1 #888);\n"
"min-width: 70px;\n"
"\n"
"background-color:rgb(255, 0, 0);\n"
"}"));

        retranslateUi(delete_ui);

        QMetaObject::connectSlotsByName(delete_ui);
    } // setupUi

    void retranslateUi(QWidget *delete_ui)
    {
        delete_ui->setWindowTitle(QApplication::translate("delete_ui", "delete_ui", 0));
        okButton->setText(QApplication::translate("delete_ui", "OK", 0));
        cancelButton->setText(QApplication::translate("delete_ui", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class delete_ui: public Ui_delete_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_UI_H
