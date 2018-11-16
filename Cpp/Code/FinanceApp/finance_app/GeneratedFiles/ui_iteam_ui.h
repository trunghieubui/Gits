/********************************************************************************
** Form generated from reading UI file 'iteam_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEAM_UI_H
#define UI_ITEAM_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_iteam_ui
{
public:
    QPushButton *okButton;
    QTableWidget *iteams_tab_2;
    QPushButton *cancelButton_2;
    QComboBox *service_name;

    void setupUi(QWidget *iteam_ui)
    {
        if (iteam_ui->objectName().isEmpty())
            iteam_ui->setObjectName(QStringLiteral("iteam_ui"));
        iteam_ui->resize(277, 179);
        okButton = new QPushButton(iteam_ui);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(170, 100, 101, 31));
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
        iteams_tab_2 = new QTableWidget(iteam_ui);
        if (iteams_tab_2->columnCount() < 1)
            iteams_tab_2->setColumnCount(1);
        QFont font;
        font.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        iteams_tab_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (iteams_tab_2->rowCount() < 4)
            iteams_tab_2->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        iteams_tab_2->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        iteams_tab_2->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        iteams_tab_2->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        iteams_tab_2->setVerticalHeaderItem(3, __qtablewidgetitem4);
        iteams_tab_2->setObjectName(QStringLiteral("iteams_tab_2"));
        iteams_tab_2->setGeometry(QRect(10, 10, 151, 161));
        iteams_tab_2->setStyleSheet(QLatin1String("#iteams_tab_2{\n"
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
"background-color:rgb(85, 170, 255);\n"
"}"));
        cancelButton_2 = new QPushButton(iteam_ui);
        cancelButton_2->setObjectName(QStringLiteral("cancelButton_2"));
        cancelButton_2->setGeometry(QRect(170, 140, 101, 31));
        cancelButton_2->setStyleSheet(QLatin1String("#cancelButton_2{\n"
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
        service_name = new QComboBox(iteam_ui);
        service_name->setObjectName(QStringLiteral("service_name"));
        service_name->setGeometry(QRect(170, 10, 101, 31));
        service_name->setStyleSheet(QLatin1String("#service_name{\n"
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

        retranslateUi(iteam_ui);

        QMetaObject::connectSlotsByName(iteam_ui);
    } // setupUi

    void retranslateUi(QWidget *iteam_ui)
    {
        iteam_ui->setWindowTitle(QApplication::translate("iteam_ui", "iteam_ui", 0));
        okButton->setText(QApplication::translate("iteam_ui", "OK", 0));
        QTableWidgetItem *___qtablewidgetitem = iteams_tab_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("iteam_ui", "Infomation", 0));
        QTableWidgetItem *___qtablewidgetitem1 = iteams_tab_2->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("iteam_ui", "Iteam", 0));
        QTableWidgetItem *___qtablewidgetitem2 = iteams_tab_2->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("iteam_ui", "Spend", 0));
        QTableWidgetItem *___qtablewidgetitem3 = iteams_tab_2->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("iteam_ui", "Date", 0));
        QTableWidgetItem *___qtablewidgetitem4 = iteams_tab_2->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("iteam_ui", "Note", 0));
        cancelButton_2->setText(QApplication::translate("iteam_ui", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class iteam_ui: public Ui_iteam_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEAM_UI_H
