#include "service_ui.h"

service_ui::service_ui(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//connect(ui.okButton, SIGNAL(clicked), this, SLOT(on_Change()));

}

service_ui::~service_ui()
{
}

service_father * service_ui::get_data_from_service_ui()
{
	int i, total;
	service_father *x;
	x = new service;
	void (service_father::*fptr[5])(int) = { &service::set_ratio_config, 
		&service::set_init_cash,
		&service::set_used_cash,
		&service::set_spare_cash,
		&service::set_ratio_calc };
	x->setname(ui.services_tab_2->item(0, 0)->text());
	total = ui.services_tab_2->item(1, 0)->text().toInt();
	x->set_ratio_config(ui.services_tab_2->item(2, 0)->text().toInt());
	x->set_init_cash((total*x->get_ratio_config()) / 100);
	x->set_used_cash(0);
	x->set_spare_cash(x->get_init_cash());
	x->set_ratio_calc(0);
	return x;
}

/*void service_ui::on_okButton_clicked()
{
	service_father *x;
	vector <service_father *> list_service;
	finance_app fa;
	int i;
	x = get_data_from_service_ui();
	qInfo() << x->get_init_cash();
	qInfo() << x->getname();
	fa.handle_write_one_sevice_to_db(x);
	qInfo() << "Save a new service to database";
	connect(ui.okButton, SIGNAL(clicked), this, SIGNAL(on_Change()));
	this->close();
}*/

void service_ui::on_cancelButton_clicked()
{
	this->close();
}

//void service_ui::on_Change()
void service_ui::on_okButton_clicked()
{
	qInfo() << "you click ok in service_ui";
	emit this->data_from_service_ui_to_finance_ui(get_data_from_service_ui());
	this->close();
}