#include "add_ui.h"

add_ui::add_ui(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

add_ui::~add_ui()
{
}

void add_ui::on_add_service_clicked()
{
	qInfo() << "add service";
	add_service_ui *s = new add_service_ui;
	emit this->pointer_service_from_add_ui_to_menu_ui(s);
	s->showNormal();
	this->close();
}

void add_ui::on_add_iteam_clicked()
{
	qInfo() << "add iteam";
	iteam_ui *i = new iteam_ui;
	emit this->pointer_iteam_from_add_ui_to_menu_ui(i);
	i->showNormal();
	this->close();
}

void add_ui::on_add_income_clicked()
{
	qInfo() << "add income";
	income_ui *in = new income_ui;
	emit this->pointer_income_from_add_ui_to_menu_ui(in);
	in->showNormal();
	this->close();
}


