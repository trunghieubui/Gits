#include "Iteam.h"

void iteam::set_name_iteam(QString name_)
{
	name_iteam = name_;
}

void iteam::set_name_service(QString name_)
{
	name_service = name_;
}

void iteam::set_cash_out(int cash)
{
	cash_out = cash;
}

void iteam::set_date(QString date_)
{
	date = date_;
}

void iteam::set_note_iteam_in(QString note)
{
	note_iteam_in = note;
}

int iteam::get_cash_out()
{
	return cash_out;
}

QString iteam::get_date()
{
	return date;
}

QString iteam::get_name_iteam()
{
	return name_iteam;
}

QString iteam::get_name_service()
{
	return name_service;
}

QString iteam::get_note_iteam_in()
{
	return note_iteam_in;
}