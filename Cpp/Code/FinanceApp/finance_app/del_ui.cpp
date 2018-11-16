#include "del_ui.h"

del_ui::del_ui(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

del_ui::~del_ui()
{
}

void del_ui::on_del_service_clicked()
{
	qInfo() << "on_del_service_clicked";
}

void del_ui::on_del_iteam_clicked()
{
	qInfo() << "on_del_service_clicked";
}

void del_ui::on_del_income_clicked()
{
	qInfo() << "on_del_service_clicked";
}

