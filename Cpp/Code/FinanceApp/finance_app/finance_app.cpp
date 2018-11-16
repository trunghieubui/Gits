#pragma once
#include "finance_app.h"
finance_app::finance_app(QWidget *parent)
	: QMainWindow(parent)
{
	//cout << "App";
	ui.setupUi(this);
	QPixmap bkgnd("F:/02---PROGRAMMING/05--C++/04--Apps/finance_app/background.jpg");
	bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
	QPalette palette;
	palette.setBrush(QPalette::Background, bkgnd);
	this->setPalette(palette);
	//this->setStyleSheet("{background-image: url(:/02---PROGRAMMING/05--C++/04--Apps/finance_app/03337_bluemountains_1920x1080.jpg);}");
	
	handle_create_interface();

	service_father *x, *y;
	vector <service_father *> list_services;
	vector <income *> list_income;
	x = new service;
	iteam * i = new iteam;
	vector <iteam *> list_iteams;
	handle_create_serive_table_db();
	handle_create_iteam_table_db();
	handle_create_income_table_db();
	


	list_iteams = handle_read_all_iteams_in_db();
	list_services = handle_read_all_services_in_db();
	list_income = handle_read_all_incomes_database();
	handle_display_service(list_services);
	handle_display_iteam(list_iteams);
	handle_display_income(list_income);
	handle_treeview();
	ui.income->setContextMenuPolicy(Qt::CustomContextMenu);
	ui.iteams_tab->setContextMenuPolicy(Qt::CustomContextMenu);
	ui.services_tab->setContextMenuPolicy(Qt::CustomContextMenu);


	connect(ui.income, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(menu_action_for_income(QPoint)));
	connect(ui.iteams_tab, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(menu_action_for_iteam(QPoint)));
	connect(ui.services_tab, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(menu_action_for_service(QPoint)));

	connect(ui.income, SIGNAL(cellDoubleClicked(int, int)), this, SLOT(doubleClick_in_incomeTable(int, int)));

}



