#pragma once
#include"finance_app.h"

/*void finance_app::cellSelected(int nRow, int nCol)
{
	int row;
	qInfo() << "handle delete";
	qInfo() << nRow;
	QString name_service;
	name_service = ui.services_tab->item(nRow, 0)->text();
	qInfo() << name_service;
}*/

/*void finance_app::on_add_iteam_clicked()
{
	qInfo() << "you clicked Iteam button";
	iteam_ui *i_ui = new iteam_ui;
	connect(i_ui, SIGNAL(signal_to_get_iteam_in_iteam_ui(iteam *)), this, SLOT(on_data_from_iteam_ui_to_finance_ui(iteam *)));
	i_ui->showNormal();

}*/

/*void finance_app::on_add_service_clicked()
{
	qInfo() << "you clicked Service button";
	int count;

	count = ui.services_tab->rowCount();
	service_ui *s = new service_ui;
	QObject::connect(s, SIGNAL(data_from_service_ui_to_finance_ui(service_father *)), this, SLOT(on_data_from_service_ui_to_finance_ui(service_father *)));
	s->showNormal();
}*/




/*void finance_app::on_ok_clicked()
{
	service_father *x;
	vector <service_father *> list_services;
	vector <iteam *> list_iteams;
	int i;
	qInfo() << "Ok clicked";
}*/

void finance_app::on_menu_button_clicked()
{
	menu_ui *m = new menu_ui;
	QObject::connect(m, SIGNAL(pointer_service_from_menu_ui_to_finance_app(add_service_ui *)), this, SLOT(on_pointer_service_from_menu_ui_to_finance_app(add_service_ui *)));
	QObject::connect(m, SIGNAL(pointer_iteam_from_menu_ui_to_finance_app(iteam_ui *)), this, SLOT(on_pointer_iteam_from_menu_ui_to_finance_app(iteam_ui *)));
	QObject::connect(m, SIGNAL(pointer_income_from_menu_ui_to_finance_app(income_ui *)), this, SLOT(on_pointer_income_from_menu_ui_to_finance_app(income_ui *)));

	m->showNormal();
}
void finance_app::on_cancel_clicked()
{
	qInfo() << "Cancel clicked";
	this->close();
}



/*void finance_app::on_delete_Button_clicked()
{
	delete_ui *d = new delete_ui;
	connect(d, SIGNAL(signal_choose_service_to_delete_in_delete_ui(QString)), this, SLOT(get_data_from_delete_ui(QString)));
	d->showNormal();
}*/



/*void finance_app::on_add_button_clicked()
{
	qInfo() << "add button";
	add_ui *a = new add_ui;
	QObject::connect(a, SIGNAL(pointer_service_from_add_ui_to_finance_app(add_service_ui *)), this, SLOT(on_pointer_service_from_add_ui_to_finance_app(add_service_ui *)));
	QObject::connect(a, SIGNAL(pointer_iteam_from_add_ui_to_finance_app(iteam_ui *)), this, SLOT(on_pointer_iteam_from_add_ui_to_finance_app(iteam_ui *)));
	QObject::connect(a, SIGNAL(pointer_income_from_add_ui_to_finance_app(income_ui *)), this, SLOT(on_pointer_income_from_add_ui_to_finance_app(income_ui *)));

	
	a->showNormal();
}*/

/*void finance_app::on_delete_button_clicked()
{
	qInfo() << "delete button";
	del_ui *a = new del_ui;
	a->showNormal();
}*/


