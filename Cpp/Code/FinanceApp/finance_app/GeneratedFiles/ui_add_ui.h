/********************************************************************************
** Form generated from reading UI file 'add_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_UI_H
#define UI_ADD_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_ui
{
public:
    QPushButton *add_service;
    QPushButton *add_iteam;
    QPushButton *add_income;

    void setupUi(QWidget *add_ui)
    {
        if (add_ui->objectName().isEmpty())
            add_ui->setObjectName(QStringLiteral("add_ui"));
        add_ui->resize(260, 131);
        add_service = new QPushButton(add_ui);
        add_service->setObjectName(QStringLiteral("add_service"));
        add_service->setGeometry(QRect(10, 10, 111, 31));
        add_service->setStyleSheet(QLatin1String("#add_service{\n"
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
        add_iteam = new QPushButton(add_ui);
        add_iteam->setObjectName(QStringLiteral("add_iteam"));
        add_iteam->setGeometry(QRect(10, 50, 111, 31));
        add_iteam->setStyleSheet(QLatin1String("#add_iteam{\n"
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
        add_income = new QPushButton(add_ui);
        add_income->setObjectName(QStringLiteral("add_income"));
        add_income->setGeometry(QRect(140, 10, 104, 104));
        add_income->setStyleSheet(QLatin1String("#add_income{\n"
"font: 75 14pt \"Times New Roman\";\n"
" border-style: solid;\n"
" border-width:1px;\n"
"\n"
"\n"
"color:#333;\n"
"border: 2px solid #555;\n"
"\n"
"\n"
"\n"
"background-color: rgb(255, 0, 0);\n"
"\n"
"\n"
" border-radius:50px;\n"
" border-color: rgb(61, 61, 61);\n"
" max-width:100px;\n"
" max-height:100px;\n"
" min-width:100px;\n"
" min-height:100px;\n"
"}"));

        retranslateUi(add_ui);

        QMetaObject::connectSlotsByName(add_ui);
    } // setupUi

    void retranslateUi(QWidget *add_ui)
    {
        add_ui->setWindowTitle(QApplication::translate("add_ui", "add_ui", 0));
#ifndef QT_NO_TOOLTIP
        add_service->setToolTip(QApplication::translate("add_ui", "<html><head/><body><p>Click here to add a new service</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        add_service->setWhatsThis(QApplication::translate("add_ui", "<html><head/><body><p>Service</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        add_service->setText(QApplication::translate("add_ui", "Service", 0));
#ifndef QT_NO_TOOLTIP
        add_iteam->setToolTip(QApplication::translate("add_ui", "<html><head/><body><p>Click here to add a new iteam</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        add_iteam->setText(QApplication::translate("add_ui", "Iteam", 0));
#ifndef QT_NO_TOOLTIP
        add_income->setToolTip(QApplication::translate("add_ui", "<html><head/><body><p>Click here to add a new iteam</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        add_income->setText(QApplication::translate("add_ui", "Income", 0));
    } // retranslateUi

};

namespace Ui {
    class add_ui: public Ui_add_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_UI_H
