/********************************************************************************
** Form generated from reading UI file 'menu_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_UI_H
#define UI_MENU_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu_ui
{
public:
    QTabWidget *menu_tab;
    QWidget *tab_3;
    QPushButton *iteam_add_button;
    QPushButton *iteam_del_button;
    QPushButton *iteam_search_button;
    QPushButton *isororr_sort_button;
    QWidget *tab_2;
    QPushButton *service_add_button;
    QPushButton *service_del_button;
    QPushButton *service_search_button;
    QPushButton *service_sort_button;
    QWidget *tab;
    QPushButton *income_sort_button;
    QPushButton *income_add_button;
    QPushButton *income_del_button;
    QPushButton *income_search_button;

    void setupUi(QWidget *menu_ui)
    {
        if (menu_ui->objectName().isEmpty())
            menu_ui->setObjectName(QStringLiteral("menu_ui"));
        menu_ui->resize(319, 150);
        menu_tab = new QTabWidget(menu_ui);
        menu_tab->setObjectName(QStringLiteral("menu_tab"));
        menu_tab->setGeometry(QRect(10, 10, 301, 131));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        iteam_add_button = new QPushButton(tab_3);
        iteam_add_button->setObjectName(QStringLiteral("iteam_add_button"));
        iteam_add_button->setGeometry(QRect(10, 10, 131, 31));
        iteam_add_button->setStyleSheet(QLatin1String("#iteam_add_button{\n"
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
        iteam_del_button = new QPushButton(tab_3);
        iteam_del_button->setObjectName(QStringLiteral("iteam_del_button"));
        iteam_del_button->setGeometry(QRect(10, 60, 131, 31));
        iteam_del_button->setStyleSheet(QLatin1String("#iteam_del_button{\n"
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
        iteam_search_button = new QPushButton(tab_3);
        iteam_search_button->setObjectName(QStringLiteral("iteam_search_button"));
        iteam_search_button->setGeometry(QRect(160, 10, 131, 31));
        iteam_search_button->setStyleSheet(QLatin1String("#iteam_search_button{\n"
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
"background-color:rgb(63, 127, 191);\n"
"}"));
        isororr_sort_button = new QPushButton(tab_3);
        isororr_sort_button->setObjectName(QStringLiteral("isororr_sort_button"));
        isororr_sort_button->setGeometry(QRect(160, 60, 131, 31));
        isororr_sort_button->setStyleSheet(QLatin1String("#isororr_sort_button{\n"
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
"background-color:rgb(225, 225, 0);\n"
"}"));
        menu_tab->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        service_add_button = new QPushButton(tab_2);
        service_add_button->setObjectName(QStringLiteral("service_add_button"));
        service_add_button->setGeometry(QRect(10, 10, 131, 31));
        service_add_button->setStyleSheet(QLatin1String("#service_add_button{\n"
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
        service_del_button = new QPushButton(tab_2);
        service_del_button->setObjectName(QStringLiteral("service_del_button"));
        service_del_button->setGeometry(QRect(10, 60, 131, 31));
        service_del_button->setStyleSheet(QLatin1String("#service_del_button{\n"
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
        service_search_button = new QPushButton(tab_2);
        service_search_button->setObjectName(QStringLiteral("service_search_button"));
        service_search_button->setGeometry(QRect(160, 10, 131, 31));
        service_search_button->setStyleSheet(QLatin1String("#service_search_button{\n"
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
"background-color:rgb(63, 127, 191);\n"
"}"));
        service_sort_button = new QPushButton(tab_2);
        service_sort_button->setObjectName(QStringLiteral("service_sort_button"));
        service_sort_button->setGeometry(QRect(160, 60, 131, 31));
        service_sort_button->setStyleSheet(QLatin1String("#service_sort_button{\n"
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
"background-color:rgb(225, 225, 0);\n"
"}"));
        menu_tab->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        income_sort_button = new QPushButton(tab);
        income_sort_button->setObjectName(QStringLiteral("income_sort_button"));
        income_sort_button->setGeometry(QRect(160, 60, 131, 31));
        income_sort_button->setStyleSheet(QLatin1String("#income_sort_button{\n"
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
"background-color:rgb(225, 225, 0);\n"
"}"));
        income_add_button = new QPushButton(tab);
        income_add_button->setObjectName(QStringLiteral("income_add_button"));
        income_add_button->setGeometry(QRect(10, 10, 131, 31));
        income_add_button->setStyleSheet(QLatin1String("#income_add_button{\n"
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
        income_del_button = new QPushButton(tab);
        income_del_button->setObjectName(QStringLiteral("income_del_button"));
        income_del_button->setGeometry(QRect(10, 60, 131, 31));
        income_del_button->setStyleSheet(QLatin1String("#income_del_button{\n"
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
        income_search_button = new QPushButton(tab);
        income_search_button->setObjectName(QStringLiteral("income_search_button"));
        income_search_button->setGeometry(QRect(160, 10, 131, 31));
        income_search_button->setStyleSheet(QLatin1String("#income_search_button{\n"
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
"background-color:rgb(63, 127, 191);\n"
"}"));
        menu_tab->addTab(tab, QString());

        retranslateUi(menu_ui);

        menu_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(menu_ui);
    } // setupUi

    void retranslateUi(QWidget *menu_ui)
    {
        menu_ui->setWindowTitle(QApplication::translate("menu_ui", "menu_ui", 0));
        iteam_add_button->setText(QApplication::translate("menu_ui", "ADD", 0));
        iteam_del_button->setText(QApplication::translate("menu_ui", "DEL", 0));
        iteam_search_button->setText(QApplication::translate("menu_ui", "SEARCH", 0));
        isororr_sort_button->setText(QApplication::translate("menu_ui", "SORT", 0));
        menu_tab->setTabText(menu_tab->indexOf(tab_3), QApplication::translate("menu_ui", "Page", 0));
        service_add_button->setText(QApplication::translate("menu_ui", "ADD", 0));
        service_del_button->setText(QApplication::translate("menu_ui", "DEL", 0));
        service_search_button->setText(QApplication::translate("menu_ui", "SEARCH", 0));
        service_sort_button->setText(QApplication::translate("menu_ui", "SORT", 0));
        menu_tab->setTabText(menu_tab->indexOf(tab_2), QApplication::translate("menu_ui", "Page", 0));
        income_sort_button->setText(QApplication::translate("menu_ui", "SORT", 0));
        income_add_button->setText(QApplication::translate("menu_ui", "ADD", 0));
        income_del_button->setText(QApplication::translate("menu_ui", "DEL", 0));
        income_search_button->setText(QApplication::translate("menu_ui", "SEARCH", 0));
        menu_tab->setTabText(menu_tab->indexOf(tab), QApplication::translate("menu_ui", "Page", 0));
    } // retranslateUi

};

namespace Ui {
    class menu_ui: public Ui_menu_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_UI_H
