/********************************************************************************
** Form generated from reading UI file 'del_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEL_UI_H
#define UI_DEL_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_del_ui
{
public:
    QPushButton *del_income;
    QPushButton *del_service;
    QPushButton *del_iteam;

    void setupUi(QWidget *del_ui)
    {
        if (del_ui->objectName().isEmpty())
            del_ui->setObjectName(QStringLiteral("del_ui"));
        del_ui->resize(261, 132);
        del_income = new QPushButton(del_ui);
        del_income->setObjectName(QStringLiteral("del_income"));
        del_income->setGeometry(QRect(140, 10, 104, 104));
        del_income->setStyleSheet(QLatin1String("#del_income{\n"
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
        del_service = new QPushButton(del_ui);
        del_service->setObjectName(QStringLiteral("del_service"));
        del_service->setGeometry(QRect(10, 10, 111, 41));
        del_service->setStyleSheet(QLatin1String("#del_service{\n"
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
        del_iteam = new QPushButton(del_ui);
        del_iteam->setObjectName(QStringLiteral("del_iteam"));
        del_iteam->setGeometry(QRect(10, 70, 111, 41));
        del_iteam->setStyleSheet(QLatin1String("#del_iteam{\n"
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

        retranslateUi(del_ui);

        QMetaObject::connectSlotsByName(del_ui);
    } // setupUi

    void retranslateUi(QWidget *del_ui)
    {
        del_ui->setWindowTitle(QApplication::translate("del_ui", "del_ui", 0));
#ifndef QT_NO_TOOLTIP
        del_income->setToolTip(QApplication::translate("del_ui", "<html><head/><body><p>Click here to add a new iteam</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        del_income->setText(QApplication::translate("del_ui", "Income", 0));
#ifndef QT_NO_TOOLTIP
        del_service->setToolTip(QApplication::translate("del_ui", "<html><head/><body><p>Click here to add a new service</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        del_service->setWhatsThis(QApplication::translate("del_ui", "<html><head/><body><p>Service</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        del_service->setText(QApplication::translate("del_ui", "Service", 0));
#ifndef QT_NO_TOOLTIP
        del_iteam->setToolTip(QApplication::translate("del_ui", "<html><head/><body><p>Click here to add a new iteam</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        del_iteam->setText(QApplication::translate("del_ui", "Iteam", 0));
    } // retranslateUi

};

namespace Ui {
    class del_ui: public Ui_del_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_UI_H
