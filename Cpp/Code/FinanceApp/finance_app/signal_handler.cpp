#pragma once
#include"finance_app.h"

void finance_app::on_data_from_service_ui_to_finance_ui(service_father * x)
{
	handle_show_the_next_service_to_interface(x);
	if (handle_check_input_service() == 0) {
		qInfo() << "ERROR in input service";
		ui.status->setText(QString("ERROR in INPUT service !!! Check again"));
		exit;
	}
	else {
		handle_write_one_sevice_to_db(x);
		ui.status->setText(QString("Save service done!"));
	}
}

void finance_app::on_data_from_iteam_ui_to_finance_ui(iteam * x)
{
	// show the iteam that has been entered by iteam_ui
	handle_show_the_next_iteam_to_interface(x);

	// check iteam
	if (handle_check_input_iteam() == 0) {
		qInfo() << "ERROR in input iteam";
		ui.status->setText(QString("ERROR in INPUT iteam !!! Check again"));
		exit;
	}
	else {
		// save this iteam to db
		handle_write_one_iteam_to_db(x);
		handle_calculator_one_service_and_save_to_db(x);
		ui.status->setText(QString("Save iteam done!"));
		handle_reload_all_services_to_interface();
	}
}


void finance_app::on_data_from_income_ui_to_finance_ui(income * in)
{
	vector <income *> list_income;
	qInfo() << in->get_name();
	qInfo() << in->get_cash();
	handle_write_one_income_to_db(in);
	list_income = handle_read_all_incomes_database();
	qInfo() << list_income.size();
	handle_reload_all_incomes_to_interface();
}


void finance_app::get_data_from_delete_ui(QString x)
{
	vector <service_father *> list_service;
	qInfo() << x;
	handle_delete_one_service_from_db(x);
	list_service = handle_read_all_services_in_db();
	handle_display_service(list_service);
}

void finance_app::doubleClick_in_incomeTable(int row, int col)
{
	int now;
	now = ui.income->rowCount();
	qInfo() << "now: " << now;
	qInfo() << "Row: " << row << " | " << "Col: " << col;
	ui.income->setRowCount(row + 1);
}


// ----------------------------------INCOME--------------------------------------//
void finance_app::menu_action_for_income(QPoint position)
{
	QMenu *menu = new QMenu(this);
	QAction *addIncome = new QAction("Add", this);
	QAction *delIncome = new QAction("Delete", this);
	QAction *sortIncome = new QAction("Sort", this);
	QAction *modIncome = new QAction("Modify", this);
	connect(addIncome, SIGNAL(triggered()), this, SLOT(addIncomeAction()));
	connect(delIncome, SIGNAL(triggered()), this, SLOT(delIncomeAction()));
	connect(sortIncome, SIGNAL(triggered()), this, SLOT(sortIncomeAction()));
	connect(modIncome, SIGNAL(triggered()), this, SLOT(modIncomeAction()));

	menu->addAction(addIncome);
	menu->addAction(delIncome);
	menu->addAction(sortIncome);
	menu->addAction(modIncome);
	menu->popup(ui.income->viewport()->mapToGlobal(position));
}




void finance_app::addIncomeAction()
{
	income_ui *a = new income_ui;
	connect(a, SIGNAL(data_from_income_ui_to_finance_ui(income *)), this, SLOT(on_data_from_income_ui_to_finance_ui(income *)));
	a->showNormal();
}

void finance_app::delIncomeAction()
{
	int row;
	QString name;
	row = ui.income->currentRow();
	if (ui.income->item(row, 0) != NULL) {
		name = ui.income->item(row, 0)->text();
		handle_delete_one_income_from_db(name);
	}
	ui.income->removeRow(row);	
}


void finance_app::modIncomeAction()
{
	qInfo() << "modify";
	income *in = new income;
	int row;
	QString name;
	row = ui.income->currentRow();
	if (ui.income->item(row, 0) != NULL) {
		in->set_name(ui.income->item(row, 0)->text());
		in->set_cash(ui.income->item(row, 1)->text().toInt());
	}
	name = ui.income->item(row, 0)->text();
	handle_delete_one_income_from_db(name);
	ui.income->removeRow(row);
	income_ui *a = new income_ui;
	connect(this, SIGNAL(pointer_data_income_to_income_ui_in_modAction(income *)), a, SLOT(on_pointer_data_income_to_income_ui_in_modAction(income *)));
	emit this->pointer_data_income_to_income_ui_in_modAction(in);
	connect(a, SIGNAL(data_from_income_ui_to_finance_ui(income *)), this, SLOT(on_data_from_income_ui_to_finance_ui(income *)));
	a->showNormal();
}


// ----------------------------------ITEAM--------------------------------------//
void finance_app::menu_action_for_iteam(QPoint position)
{
	QMenu *menu = new QMenu(this);
	QAction *addIncome = new QAction("Add", this);
	QAction *delIncome = new QAction("Delete", this);
	QAction *sortIncome = new QAction("Sort", this);
	QAction *modIncome = new QAction("Modify", this);
	connect(addIncome, SIGNAL(triggered()), this, SLOT(addIteamAction()));
	connect(delIncome, SIGNAL(triggered()), this, SLOT(delIteamAction()));
	connect(sortIncome, SIGNAL(triggered()), this, SLOT(sortIteamAction()));
	connect(modIncome, SIGNAL(tringgered()), this, SLOT(modIteamAction()));

	menu->addAction(addIncome);
	menu->addAction(delIncome);
	menu->addAction(sortIncome);
	menu->addAction(modIncome);
	menu->popup(ui.iteams_tab->viewport()->mapToGlobal(position));
}

void finance_app::addIteamAction()
{
	iteam_ui *a = new iteam_ui;
	connect(a, SIGNAL(signal_to_get_iteam_in_iteam_ui(iteam *)), this, SLOT(on_data_from_iteam_ui_to_finance_ui(iteam *)));
	a->showNormal();
}

void finance_app::delIteamAction()
{
	qInfo() << "del action";
	int row;
	QString name;
	row = ui.iteams_tab->currentRow();
	if (ui.iteams_tab->item(row, 0) != NULL) {
		name = ui.iteams_tab->item(row, 1)->text();
		handle_delete_one_iteam_from_db(name);
	}
	ui.iteams_tab->removeRow(row);
}

void finance_app::modIteamAction()
{
	income *in = new income;
	int row;
	QString name;
	row = ui.income->currentRow();
	if (ui.income->item(row, 0) != NULL) {
		in->set_name(ui.income->item(row, 0)->text());
		in->set_cash(ui.income->item(row, 1)->text().toInt());
	}
	name = ui.income->item(row, 0)->text();
	handle_delete_one_income_from_db(name);
	ui.income->removeRow(row);
	income_ui *a = new income_ui;
	connect(this, SIGNAL(pointer_data_income_to_income_ui_in_modAction(income *)), a, SLOT(on_pointer_data_income_to_income_ui_in_modAction(income *)));
	emit this->pointer_data_income_to_income_ui_in_modAction(in);
	connect(a, SIGNAL(data_from_income_ui_to_finance_ui(income *)), this, SLOT(on_data_from_income_ui_to_finance_ui(income *)));
	a->showNormal();
}


// ----------------------------------SERVICE--------------------------------------//
void finance_app::menu_action_for_service(QPoint position)
{
	QMenu *menu = new QMenu(this);
	QAction *addIncome = new QAction("Add", this);
	QAction *delIncome = new QAction("Delete", this);
	QAction *sortIncome = new QAction("Sort", this);
	QAction *modIncome = new QAction("Modify", this);
	connect(addIncome, SIGNAL(triggered()), this, SLOT(addServiceAction()));
	connect(delIncome, SIGNAL(triggered()), this, SLOT(delServiceAction()));
	connect(sortIncome, SIGNAL(triggered()), this, SLOT(sortServiceAction()));
	connect(modIncome, SIGNAL(tringgered()), this, SLOT(modServiceAction()));

	menu->addAction(addIncome);
	menu->addAction(delIncome);
	menu->addAction(sortIncome);
	menu->addAction(modIncome);
	menu->popup(ui.services_tab->viewport()->mapToGlobal(position));
}




void finance_app::addServiceAction()
{
	add_service_ui *a = new add_service_ui;
	QObject::connect(a, SIGNAL(data_from_service_ui_to_finance_ui(service_father *)), this, SLOT(on_data_from_service_ui_to_finance_ui(service_father *)));
	a->showNormal();
}

void finance_app::delServiceAction()
{
	int row;
	QString name;
	row = ui.services_tab->currentRow();
	if (ui.services_tab->item(row, 0) != NULL) {
		name = ui.services_tab->item(row, 0)->text();
		handle_delete_one_service_from_db(name);
	}
	ui.services_tab->removeRow(row);
}






void finance_app::on_pointer_service_from_menu_ui_to_finance_app(add_service_ui *s)
{
	qInfo() << "on_pointer_service_from_add_ui_to_finance_app";
	QObject::connect(s, SIGNAL(data_from_service_ui_to_finance_ui(service_father *)), this, SLOT(on_data_from_service_ui_to_finance_ui(service_father *)));
}

void finance_app::on_pointer_iteam_from_menu_ui_to_finance_app(iteam_ui *i)
{
	qInfo() << "on_pointer_iteam_from_add_ui_to_finance_app";
	connect(i, SIGNAL(signal_to_get_iteam_in_iteam_ui(iteam *)), this, SLOT(on_data_from_iteam_ui_to_finance_ui(iteam *)));
}

void finance_app::on_pointer_income_from_menu_ui_to_finance_app(income_ui *in)
{
	qInfo() << "on_pointer_income_from_add_ui_to_finance_app";
	connect(in, SIGNAL(data_from_income_ui_to_finance_ui(income *)), this, SLOT(on_data_from_income_ui_to_finance_ui(income *)));
}