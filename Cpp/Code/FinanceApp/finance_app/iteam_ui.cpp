#include "iteam_ui.h"

iteam_ui::iteam_ui(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	handle_create_interface();
}

iteam_ui::~iteam_ui()
{
}

void iteam_ui::on_okButton_clicked()
{
	qInfo() << "You clicked ok button";
	iteam *x;
	x = handle_get_data_from_iteam_ui();
	emit this->signal_to_get_iteam_in_iteam_ui(x);
	this->close();
}

void iteam_ui::handle_create_interface()
{
	int i;
	vector <service_father *> x;
	QStringList list;
	finance_app fa;
	x = fa.handle_read_all_services_in_db();
	for (i = 0; i < x.size(); i++) {
		list << x[i]->getname();
	}
	ui.service_name->insertItems(0, list);
}


iteam * iteam_ui::handle_get_data_from_iteam_ui()
{
	int i, total;
	iteam *x;
	x = new iteam;
	void (iteam::*fptr[4])(QString) = { &iteam::set_name_service,
		&iteam::set_name_iteam,
		&iteam::set_date,
		&iteam::set_note_iteam_in};

	x->set_name_service(ui.service_name->currentText());
	x->set_name_iteam(ui.iteams_tab_2->item(0, 0)->text());
	x->set_cash_out(ui.iteams_tab_2->item(1, 0)->text().toInt());
	x->set_date(ui.iteams_tab_2->item(2, 0)->text());
	x->set_note_iteam_in(ui.iteams_tab_2->item(3, 0)->text());
	return x;
}

