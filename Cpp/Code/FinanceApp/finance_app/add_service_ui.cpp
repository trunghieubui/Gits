#include "add_service_ui.h"

add_service_ui::add_service_ui(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	handle_create_interface();
}

add_service_ui::~add_service_ui()
{
}

void add_service_ui::handle_create_interface()
{
	int i;
	vector <income *> x;
	QStringList list;
	finance_app fa;
	x = fa.handle_read_all_incomes_database();
	for (i = 0; i < x.size(); i++) {
		//qInfo() << "Name income: " << x[i]->get_name();
		list << x[i]->get_name();
	}
	ui.income_name->insertItems(0, list);
}


service_father * add_service_ui::get_data_from_service_ui()
{
	int i, total;
	QString name_income;
	income *y;
	service_father *x;
	x = new service;

	x->setname(ui.services_tab_2->item(0, 0)->text());
	name_income = ui.income_name->currentText();
	finance_app fa;
	y = fa.handle_read_one_income_database(name_income);
	total = y->get_cash();
	//qInfo() << "Total: " << total;

	x->set_ratio_config(ui.services_tab_2->item(0, 1)->text().toInt());
	x->set_init_cash((total*x->get_ratio_config()) / 100);
	x->set_used_cash(0);
	x->set_spare_cash(x->get_init_cash());
	x->set_type(name_income);
	x->set_ratio_calc(0);
	qInfo() << x->getname();
	qInfo() << x->get_init_cash();
	qInfo() << x->get_ratio_calc();
	qInfo() << x->get_spare_cash();
	qInfo() << x->get_type();
	qInfo() << x->get_used_cash();
	return x;
}

void add_service_ui::on_cancelButton_clicked()
{

	this->close();
}

//void service_ui::on_Change()
void add_service_ui::on_okButton_clicked()
{
	qInfo() << "you click ok in add_service_ui";
	emit this->data_from_service_ui_to_finance_ui(get_data_from_service_ui());
	this->close();
}