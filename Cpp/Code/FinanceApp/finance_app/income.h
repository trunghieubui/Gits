#pragma once
#include"Service_father.h"

using namespace std;
class income
{
private:
	QString name_cash;
	int cash;
public:
	QString get_name();
	int get_cash();

	void set_name(QString name);
	void set_cash(int cash);
};

