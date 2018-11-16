#pragma once
#include"finance_app.h"

int s_row = 0;
int s_column = 7;
int i_row = 0;
int i_column = 5;
int setRowServices = 0;
int setRowIteams = 0;

void finance_app::handle_create_interface()
{
	//char s_header[6][100] = { "Services", "Ratio", "Init cash", "Used cash", "Spare cash", "Rate" };
	ui.services_tab->setRowCount(s_row);
	ui.services_tab->setColumnCount(s_column);
	ui.iteams_tab->setRowCount(i_row);
	ui.iteams_tab->setColumnCount(i_column);
	//ui.services_tab->setHorizontalHeaderLabels(QString("Services;Ratio (%);Init cash;Used cash;Spare cash;Rate (%)").split(";"));
	//ui.iteams_tab->setHorizontalHeaderLabels(QString("Services;Iteam;Spent cash;Date;Note").split(";"));
	ui.services_tab->horizontalHeader()->setStretchLastSection(true);
	ui.iteams_tab->horizontalHeader()->setStretchLastSection(true);
	ui.income->horizontalHeader()->setStretchLastSection(true);
	//ui.services_tab->setBackgroundRole(QPalette::Dark);

}

void finance_app::handle_display_service(vector <service_father *> x)
{
	int i;
	int sum = 0;
	int total;
	QProgressBar *battery;
	if (x.size() != 0) {
		ui.services_tab->setRowCount(x.size());
		for (i = 0; i < x.size(); i++) {
			battery = handle_QProgressBar_service(x[x.size() - i - 1]);
			ui.services_tab->setItem(i, 0, new QTableWidgetItem(x[x.size() - i - 1]->getname()));
			ui.services_tab->setItem(i, 1, new QTableWidgetItem(QString::number(x[x.size() - i - 1]->get_ratio_config())));
			ui.services_tab->setItem(i, 2, new QTableWidgetItem(QString::number(x[x.size() - i - 1]->get_init_cash())));
			ui.services_tab->setItem(i, 3, new QTableWidgetItem(QString::number(x[x.size() - i - 1]->get_used_cash())));
			ui.services_tab->setItem(i, 4, new QTableWidgetItem(QString::number(x[x.size() - i - 1]->get_spare_cash())));
			ui.services_tab->setItem(i, 5, new QTableWidgetItem((x[x.size() - i - 1]->get_type())));
			ui.services_tab->setCellWidget(i, 6, battery);
			//ui.services_tab->setItem(i, 5,i, new QProgressBar(battery.setValue(10));
			sum += x[x.size() - i - 1]->get_used_cash();

		}
		total = x[x.size() - 1]->get_init_cash() * 100 / x[x.size() - 1]->get_ratio_config();
		ui.total_view->clear();
		ui.used_view->clear();
		ui.spare_view->clear();
		ui.total_view->addItem(QString::number(total));
		ui.used_view->addItem(QString::number(sum));
		ui.spare_view->addItem(QString::number(total - sum));
	}
	else 
		ui.status->setText(QString("Service is empty!"));
}

QProgressBar * finance_app::handle_QProgressBar_service(service_father *x)
{
	QProgressBar *battery = new QProgressBar;
	battery->setOrientation(Qt::Horizontal);
	battery->setRange(0, 100); // Let's say it goes from 0 to 100
	battery->setValue(x->get_ratio_calc());
	return battery;
}


int finance_app::handle_check_input_service()
{
	int row, i, real_row;
	row = ui.services_tab->rowCount()-1;
	//qInfo() << row;
	//QString service;
	int pos = 0;
	QIntValidator check(0, 15000000);
	for (i = 1; i < 5; i++) {
		qInfo() << ui.services_tab->item(row, i)->text();
		if (!check.validate(ui.services_tab->item(row, i)->text(), pos)) {
			qErrnoWarning("Input error");
			//ui.services_tab->setRowCount(real_row);
			return 0;
		}
	}
	return 1;
}

int finance_app::handle_check_input_iteam()
{
	int row, i;
	row = ui.iteams_tab->rowCount()-1;
	//if (row == 1) real_row = 0;
	//else real_row = row + 1;
	//qInfo() << "In handle_check_input_iteam : " << row;
	//QString service;
	int pos = 0, Res;
	QIntValidator check(0, 15000000);
	//qInfo() << ui.iteams_tab->item(row, i)->text();
	QTableWidgetItem *iteam;
	for (i = 0; i < 5; i++) {
		iteam = ui.iteams_tab->item(row, i);
		if (!iteam || iteam->text().isEmpty()) {
			//qInfo() << "False";
			return 0;
		}

		/*bool flag = ui.iteams_tab->item(real_row, i)->text().isEmpty();
		qInfo() << "Flag: " << flag;
		if (flag) /* the cell is not empty */
			//return 0;
	}
	if (!check.validate(ui.iteams_tab->item(row, 2)->text(), pos)) {
		qErrnoWarning("Input error");
		ui.iteams_tab->setRowCount(row);
		return 0;
	}
	return 1;
}

vector <service_father *> finance_app::handle_get_all_services_from_interface()
{
	int row, i, j;
	vector <service_father *> list_services;
	service_father *x ;
	void (service_father::*fptr[5])(int) = { &service::set_ratio_config,
		&service::set_init_cash,
		&service::set_used_cash,
		&service::set_spare_cash,
		&service::set_ratio_calc };
	row = ui.services_tab->rowCount();
	//qInfo() << row;
	for (i = 0; i < row; i++) {
		x = new service;
		x->setname(ui.services_tab->item(i, 0)->text());
		for (j = 1; j < 6; j++) {
			(x->*fptr[j - 1])(ui.services_tab->item(i, j)->text().toInt());
		}
		x->set_type(ui.services_tab->item(i, 6)->text());
		list_services.push_back(x);
	}
	return list_services;
}

service_father *finance_app::handle_get_one_service_from_interface()
{
	int row, i, j;
	row = ui.services_tab->rowCount()-1;
	service_father *x = new service;
	/*void (service_father::*fptr[5])(int) = { &service::set_ratio_config,
		&service::set_init_cash,
		&service::set_used_cash,
		&service::set_spare_cash,
		&service::set_ratio_calc };*/
	x->setname(ui.services_tab->item(row, 0)->text());
	x->set_ratio_config(ui.services_tab->item(row, 1)->text().toInt());
	x->set_init_cash(ui.services_tab->item(row, 2)->text().toInt());
	x->set_used_cash(ui.services_tab->item(row, 3)->text().toInt());
	x->set_spare_cash(ui.services_tab->item(row, 4)->text().toInt());
	x->set_type(ui.services_tab->item(row, 5)->text());
	x->set_ratio_calc(ui.services_tab->item(row, 6)->text().toInt());
	/*for (i = 1; i < 6; i++) {
		(x->*fptr[i - 1])(ui.services_tab->item(row, i)->text().toInt());
	}*/
	//x->set_type(ui.services_tab->item(i, 5)->text());
	return x;
}

void finance_app::handle_show_the_next_service_to_interface(service_father *x)
{
	int row, i, real_row;
	QProgressBar *battery;
	row = ui.services_tab->rowCount();
	ui.services_tab->setRowCount(row + 1);
	/*unsigned int (service_father::*fptr[5])() = {&service::get_ratio_config,
		&service::get_init_cash,
		&service::get_used_cash,
		&service::get_spare_cash,
		&service::get_ratio_calc};*/

	ui.services_tab->setItem(row, 0, new QTableWidgetItem(x->getname()));
	ui.services_tab->setItem(row, 1, new QTableWidgetItem(QString::number(x->get_ratio_config())));
	ui.services_tab->setItem(row, 2, new QTableWidgetItem(QString::number(x->get_init_cash())));
	ui.services_tab->setItem(row, 3, new QTableWidgetItem(QString::number(x->get_used_cash())));
	ui.services_tab->setItem(row, 4, new QTableWidgetItem(QString::number(x->get_spare_cash())));
	ui.services_tab->setItem(row, 5, new QTableWidgetItem(x->get_type()));
	ui.services_tab->setItem(row, 6, new QTableWidgetItem(QString::number(x->get_ratio_config())));


	/*for (i = 1; i < 6; i++) {
		ui.services_tab->setItem(row, i, new QTableWidgetItem(QString::number((x->*fptr[i - 1])())));
	}*/
	//qInfo() << "row: " << row;
	battery = handle_QProgressBar_service(x);
	//qInfo() << "row: " << row;
	ui.services_tab->setCellWidget(row, 6, battery);
}

void finance_app::handle_show_the_next_iteam_to_interface(iteam *x)
{
	int row, i, real_row;
	row = ui.iteams_tab->rowCount();
	ui.iteams_tab->setRowCount(row + 1);
	//qInfo() << row;
	QString (iteam::*fptr[4])() = { &iteam::get_name_service,
		&iteam::get_name_iteam,
		&iteam::get_date,
		&iteam::get_note_iteam_in };
	
	ui.iteams_tab->setItem(row, 2, new QTableWidgetItem(QString::number(x->get_cash_out())));
	for (i = 0; i < 5; i++) {
		if (i > 2) {
			ui.iteams_tab->setItem(row, i, new QTableWidgetItem(((x->*fptr[i - 1])())));
		}
		else if (i < 2) {
			ui.iteams_tab->setItem(row, i, new QTableWidgetItem(((x->*fptr[i])())));
		}
	}
}

vector <iteam *> finance_app::handle_get_all_iteams_from_interface()
{
	int row, i, j;
	vector <iteam *> list_iteams;
	iteam *x;
	void (iteam::*fptr[4])(QString) = { &iteam::set_name_service,
		&iteam::set_name_iteam,
		&iteam::set_date,
		&iteam::set_note_iteam_in };
	row = ui.iteams_tab->rowCount();
	//qInfo() << row;
	for (i = 0; i < row; i++) {
		x = new iteam;
		x->set_cash_out(ui.iteams_tab->item(i, 2)->text().toInt());
		for (j = 0; j < 5; j++) {
			if (j < 2) 
				(x->*fptr[j])(ui.iteams_tab->item(i, j)->text());
			else if (j > 2)
				(x->*fptr[j - 1])(ui.iteams_tab->item(i, j)->text());
		}
		list_iteams.push_back(x);
	}
	qInfo() << "Finish in handle_get_all_iteams_from_interface";
	return list_iteams;
}

void finance_app::handle_display_iteam(vector <iteam *> x)
{
	int i;
	int sum = 0;
	int total;

	QTableWidget* table = new QTableWidget;
	auto item = new QTableWidgetItem(QString("%1\n%2").arg(1).arg(2));
	table->setItem(0, 0, item);
	if (x.size() != 0) {
		ui.iteams_tab->setRowCount(x.size());
		for (i = 0; i < x.size(); i++) {
			ui.iteams_tab->setItem(i, 0, new QTableWidgetItem(x[x.size() - i - 1]->get_name_service()));
			ui.iteams_tab->setItem(i, 1, new QTableWidgetItem((x[x.size() - i - 1]->get_name_iteam())));
			ui.iteams_tab->setItem(i, 2, new QTableWidgetItem(QString::number(x[x.size() - i - 1]->get_cash_out())));
			ui.iteams_tab->setItem(i, 3, new QTableWidgetItem((x[x.size() - i - 1]->get_date())));
			ui.iteams_tab->setItem(i, 4, new QTableWidgetItem((x[x.size() - i - 1]->get_note_iteam_in())));
			sum += x[x.size() - i - 1]->get_cash_out();
		}
	}
	else 
		ui.status->setText(QString("Iteam is empty!"));

}

/*
	Read from database and calculate the money
*/
void finance_app::handle_reload_all_services_to_interface()
{
	vector <service_father *> services, list_services;
	vector <iteam *> iteams;
	list_services = handle_read_all_services_in_db();
	//iteams = handle_read_all_iteams_in_db();
	//list_services = handle_calculator_all_services_and_not_save_to_db(services, iteams);
	handle_display_service(list_services);
}

void finance_app::handle_reload_one_service_to_interface()
{

}

void finance_app::handle_reload_all_incomes_to_interface()
{
	vector <income *> list_incomes;
	list_incomes = handle_read_all_incomes_database();
	handle_display_income(list_incomes);
}

void finance_app::handle_display_income(vector <income *> x)
{
	int i;
	int sum = 0;
	int total;
	if (x.size() != 0) {
		ui.income->setRowCount(x.size());
		for (i = 0; i < x.size(); i++) {		
			ui.income->setItem(i, 0, new QTableWidgetItem((x[i]->get_name())));
			ui.income->setItem(i, 1, new QTableWidgetItem(QString::number(x[i]->get_cash())));
		}
	}
	else
		ui.status->setText(QString("Income is empty!"));

}

void finance_app::handle_treeview()
{
	qInfo() << "Hello";
	ui.treeWidget->setColumnCount(2);

	/*for (int row = 0; row<3; row++)
	{
		for (int column = 0; column<2; column++)
		{
			QTableWidgetItem *newItem = new QTableWidgetItem(tr("%1 long long long long long long text").arg((row + 1)*(column + 1)));
			ui.tableWidget->setItem(row, column, newItem);
		}
		QTextEdit *edit = new QTextEdit();
		edit->setText(ui.tableWidget->item(row, 0)->text());
		ui.tableWidget->setCellWidget(row, 0, edit);
	}*/


	//QTableWidget tableWidget(3, 3);
	//	set edit trigger event
	ui.tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked
		| QAbstractItemView::SelectedClicked
		| QAbstractItemView::EditKeyPressed);

	//	set title
	QStringList headerLabels;
	headerLabels << "Name" << "Attribute" << "Comment";
	ui.tableWidget->setHorizontalHeaderLabels(headerLabels);

	QTableWidgetItem *item[3];
	//	set sample data values.
	for (int nrow = 0; nrow<3; nrow++) {
		item[0] = new QTableWidgetItem(QString("sample item name #%1").arg(nrow + 1));
		item[1] = new QTableWidgetItem(QString("att #%1").arg(nrow + 1));
		item[2] = new QTableWidgetItem(QString("comment #%1\nreturn ").arg(nrow + 1));

		for (int ncol = 0; ncol<3; ncol++) {
			ui.tableWidget->setItem(nrow, ncol, item[ncol]);

		}
	}

	//	fit of column size at contents.
	ui.tableWidget->resizeColumnsToContents();
	ui.tableWidget->resize(500, 300);

	setupTreeItems();
	//QSplitter splitter;
	//splitter.addWidget(ui.treeView);
	/*QStandardItemModel model(5, 2);
	for (int r = 0; r<5; r++)
		for (int c = 0; c<2; c++)
		{
			QStandardItem *item = new QStandardItem(QString("Row:%0, Column:%1").arg(r).arg(c));

			if (c == 0)
				for (int i = 0; i<3; i++)
				{
					QStandardItem *child = new QStandardItem(QString("Item %0").arg(i));
					child->setEditable(false);
					item->appendRow(child);
				}

			model.setItem(r, c, item);
		}
	model.setHorizontalHeaderItem(0, new QStandardItem("Foo"));
	model.setHorizontalHeaderItem(1, new QStandardItem("Bar-Baz"));

	ui.treeView->setModel(&model);
	//ui.treeView;
		//ui.treeView->show();
	//splitter.show();*/
}


void finance_app::setupTreeItems()
{
	QTreeWidgetItem *cities = new QTreeWidgetItem(ui.treeWidget);
	cities->setText(0, tr("Cities"));
	QTreeWidgetItem *osloItem = new QTreeWidgetItem(cities);
	osloItem->setText(0, tr("Oslo"));
	osloItem->setText(1, tr("Yes"));

	(new QTreeWidgetItem(cities))->setText(0, tr("Stockholm"));
	(new QTreeWidgetItem(cities))->setText(0, tr("Helsinki"));
	(new QTreeWidgetItem(cities))->setText(0, tr("Copenhagen"));

	QTreeWidgetItem *planets = new QTreeWidgetItem(ui.treeWidget, cities);
	planets->setText(0, tr("Planets"));
	(new QTreeWidgetItem(planets))->setText(0, tr("Mercury"));
	(new QTreeWidgetItem(planets))->setText(0, tr("Venus"));
	QTreeWidgetItem *earthItem = new QTreeWidgetItem(planets);
	earthItem->setText(0, tr("Earth"));
	earthItem->setText(1, tr("Yes"));
	(new QTreeWidgetItem(planets))->setText(0, tr("Mars"));
	(new QTreeWidgetItem(planets))->setText(0, tr("Jupiter"));
	(new QTreeWidgetItem(planets))->setText(0, tr("Saturn"));
	(new QTreeWidgetItem(planets))->setText(0, tr("Uranus"));
	(new QTreeWidgetItem(planets))->setText(0, tr("Neptune"));
	(new QTreeWidgetItem(planets))->setText(0, tr("Pluto"));
}