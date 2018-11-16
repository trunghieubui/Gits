#pragma once
#include<vector>
#include <stdlib.h>
#include <QList>
#include <QString>
#include <QtSql>
#include <QtWidgets/QMainWindow>
#include<iostream>
#include<string>
#include <QWidget>
#include <QProgressBar>
using namespace std;
class service_father
{
protected:
	QString name;
	unsigned int total_cash;
	unsigned int init_cash;
	unsigned int spare_cash;
	unsigned int ratio_config;
	unsigned int used_cash;
	unsigned int ratio_calc;
	QString type;
	QString date;
	QString note;
public:
	virtual void handle_input_config() = 0;

	virtual void handle_output_cash(int cash) = 0;

	virtual void handle_ratio() = 0;

	virtual void setname(QString name_) = 0;
	void set_init_cash(int cash);
	void set_spare_cash(int cash);
	void set_used_cash(int cash);
	void set_ratio_config(int cash);
	void set_ratio_calc(int ratio);
	void set_type(QString type);
	void set_note(QString note_);


	QString getname();
	QString get_type();
	unsigned int get_init_cash();
	unsigned int get_spare_cash();
	unsigned int get_used_cash();
	unsigned int get_ratio_config();
	unsigned int get_ratio_calc();
};

