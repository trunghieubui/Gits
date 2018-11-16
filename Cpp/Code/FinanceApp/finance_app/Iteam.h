#pragma once
#include"Service_father.h"
class iteam
{
private:
	QString name_iteam;
	QString name_service;
	int cash_out;
	QString date;
	QString note_iteam_in;
public:
	void set_name_service(QString name_);
	void set_name_iteam(QString name_);
	void set_cash_out(int cash);
	void set_date(QString date);
	void set_note_iteam_in(QString date);

	QString get_name_service();
	QString get_name_iteam();
	int get_cash_out();
	QString get_date();
	QString get_note_iteam_in();
};

