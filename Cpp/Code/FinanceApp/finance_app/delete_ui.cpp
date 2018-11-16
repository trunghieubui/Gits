#include "delete_ui.h"

delete_ui::delete_ui(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	handle_interface_delete_ui();
}

delete_ui::~delete_ui()
{
}

void delete_ui::handle_interface_delete_ui()
{
	int i;
	finance_app fa;
	QStringList list;
	vector <service_father *> list_services;
	list_services = fa.handle_read_all_services_in_db();
	for (i = 0; i < list_services.size(); i++) {
		list << list_services[i]->getname();
		//qInfo() << list_services[i]->getname();
	}
	ui.box_search->insertItems(0, list);
}

void delete_ui::on_okButton_clicked()
{
	qInfo() << "OK button in delete_ui";
	emit this->signal_choose_service_to_delete_in_delete_ui(ui.box_search->currentText());
	this->close();
}
