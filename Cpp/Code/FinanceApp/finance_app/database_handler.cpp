#pragma once
#include"finance_app.h"
#include<string>
void finance_app::handle_create_serive_table_db()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

	db.setDatabaseName("./service.db");

	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}

	qDebug("DB connected!");
	QSqlQuery qry; 
	qry.prepare("CREATE TABLE IF NOT EXISTS service (Service VARCHAR(50), Ratio INT, Init INT, Used INT, Spare INT, Type VARCHAR(50), Rate INT)");
	if (!qry.exec())
		qDebug() << qry.lastError();
	else
		qDebug() << "Table service created!";

	db.close();
}

void finance_app::handle_create_iteam_table_db()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

	db.setDatabaseName("./iteam.db");

	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}

	qDebug("DB connected!");
	QSqlQuery qry;

	qry.prepare("CREATE TABLE IF NOT EXISTS iteam (Service VARCHAR(50), Iteam VARCHAR(50), Cash INT, Date VARCHAR(50), Note VARCHAR(50))");
	if (!qry.exec())
		qDebug() << qry.lastError();
	else
		qDebug() << "Table iteam created!";

	db.close();
}

void finance_app::handle_create_income_table_db()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

	db.setDatabaseName("./income.db");

	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}

	qDebug("DB connected!");
	QSqlQuery qry;

	qry.prepare("CREATE TABLE IF NOT EXISTS income (Name VARCHAR(50), Income INT)");
	if (!qry.exec())
		qDebug() << qry.lastError();
	else
		qDebug() << "Table income created!";

	db.close();
}

//----------------------------------INCOME-----------------------------------//
void finance_app::handle_write_one_income_to_db(income *x)
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("./income.db");

	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}

	qDebug("Connected!");

	QSqlQuery qry;
	qry.prepare("INSERT INTO income (Name, Income) VALUES (:Name, :Income)");
	qry.bindValue(":Name", x->get_name());
	qry.bindValue(":Income", x->get_cash());
	if (!qry.exec()) {
		qDebug() << "Error insert into income";
		qDebug() << qry.lastError().text();
		exit;
	}
	else
		qInfo() << "Finished handle_write_income_db";
	db.close();
}

/*vector <income *> finance_app::handle_read_all_incomes_database()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

	db.setDatabaseName("./income.db");

	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}
	qInfo() << "Connected";
	vector <income *> x;
	vector <QString> y;
	vector <QString> z;
	QSqlQuery qry;
	int i, j;
	qry.prepare("SELECT Name FROM income ORDER BY Name ASC");
	if (!qry.exec())
	{
		qDebug() << qry.lastError().text();
		exit;
	}
	if (!qry.next()) {
		return x;
	}
	else {
		qry.previous();
		while (qry.next()) {
			qInfo() << "Income" << qry.value(0);
			y.push_back(qry.value(0).toString());
		}
		/*z.push_back(y[0]);
		for (i = 1; i < y.size(); i++) {
			if (y[i].compare(y[i - 1]) != 0) {
				z.push_back(y[i]);
			}
		}*/
		/*for (i = 0; i < z.size(); i++) {
			x.push_back(handle_read_one_income_database(y[i]));
		}
		return x;
	}
	db.close();
}*/


vector <income *> finance_app::handle_read_all_incomes_database()
{
	unsigned int x;
	income *y;
	vector <income *> list_x;
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("./income.db");
	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}
	qDebug("Connected!");

	char state[100] = "SELECT * FROM income ";
	QSqlQuery qry;
	qry.prepare(state);
	if (!qry.exec()) {
		qDebug() << qry.lastError();
		exit;
	}
	else
	{
		while (qry.next()) {
			y = new income;
			y->set_name(qry.value(0).toString());
			y->set_cash(qry.value(1).toInt());
			list_x.push_back(y);
		}
	}
	qInfo() << "Finished handle_read_all_incomes_database";
	db.close();
	return list_x;
}

income *finance_app::handle_read_one_income_database(QString name)
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("./income.db");
	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}
	qDebug("Connected!");
	income *x = new income;
	char name_final[20] = "'";
	strcat_s(name_final, name.toStdString().c_str());
	strcat_s(name_final, "'");
	char state[100] = "SELECT * FROM income WHERE Name = ";
	strcat_s(state, name_final);
	qInfo() << "string income: " << state;
	QSqlQuery qry;

	qry.prepare(state);
	if (!qry.exec()) {
		qDebug() << qry.lastError();
		exit;
	}
	else
	{
		while (qry.next()) {
			x->set_name(qry.value(0).toString());
			x->set_cash(qry.value(1).toInt());
		}
	}
	qInfo() << "Finished handle_read_one_income_database";
	db.close();
	return x;
}

void finance_app::handle_delete_one_income_from_db(QString name)
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("./income.db");

	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}

	qDebug("Connected!");

	char name_final[20] = "'";
	strcat_s(name_final, name.toStdString().c_str());
	strcat_s(name_final, "'");
	char state[100] = "DELETE FROM income WHERE Name = ";
	strcat_s(state, name_final);
	qInfo() << state;
	QSqlQuery qry;

	qry.prepare(state);
	if (!qry.exec()) {
		qDebug() << "Error delete a service from database";
		qDebug() << qry.lastError().text();
		exit;
	}
	else
		qInfo() << "Finished handle_delete_a_service_from_db";
	db.close();
}

//---------------------------------------------------------------------------//




//----------------------------------SERVICE-----------------------------------//
/*
	read one service from database
	return a pointer points to service in database
*/
service_father *finance_app::handle_read_one_service_database(QString name)
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("./service.db");
	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}
	qDebug("Connected!");
	service_father *x = new service;
	char name_final[20] = "'";
	strcat_s(name_final, name.toStdString().c_str());
	strcat_s(name_final, "'");
	char state[100] = "SELECT * FROM service WHERE Service = ";
	strcat_s(state, name_final);
	qInfo() << "string service: " << state;
	QSqlQuery qry;

	qry.prepare(state);
	if (!qry.exec()) {
		qDebug() << qry.lastError();
		exit;
	}
	else
	{
		while (qry.next()) {
			x->setname(qry.value(0).toString());
			x->set_ratio_config(qry.value(1).toInt());
			x->set_init_cash(qry.value(2).toInt());
			x->set_used_cash(qry.value(3).toInt());
			x->set_spare_cash(qry.value(4).toInt());
			x->set_type(qry.value(5).toString());
			x->set_ratio_calc(qry.value(6).toInt());
		}
	}
	qInfo() << "Finished handle_read_one_service_database";
	db.close();
	return x;
}

/*
	read all services in database
	return a pointer of a list of services
*/
vector <service_father *> finance_app::handle_read_all_services_in_db()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

	db.setDatabaseName("./service.db");

	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}
	qInfo() << "Connected";
	vector <service_father *> x;
	vector <QString> y;
	vector <QString> z;
	QSqlQuery qry;
	int i,j;
	qry.prepare("SELECT Service FROM service ORDER BY Service ASC");
	if (!qry.exec())
	{
		qDebug() << qry.lastError().text();
		exit;
	}
	if (!qry.next()) {
		return x;
	}
	else {
		qry.previous();
		while (qry.next()) {
			//qInfo() << "Service" << qry.value(0);
			y.push_back(qry.value(0).toString());
		}
		z.push_back(y[0]);
		for (i = 1; i < y.size(); i++) {
			if (y[i].compare(y[i - 1]) != 0) {
				z.push_back(y[i]);
			}
		}
		for (i = 0; i < z.size(); i++) {
			x.push_back(handle_read_one_service_database(z[i]));
		}
		return x;
	}
	db.close();
}

/*
	write a service to database
*/
void finance_app::handle_write_one_sevice_to_db(service_father *x)
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("./service.db");

	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}

	qDebug("Connected!");

	//qInfo() << x->get_type();
	qInfo() << x->getname();
	qInfo() << x->get_ratio_config();
	qInfo() << x->get_init_cash();
	qInfo() << x->get_ratio_calc();
	qInfo() << x->get_spare_cash();
	qInfo() << x->get_type();
	qInfo() << x->get_used_cash();
	QSqlQuery qry;
	//qry.prepare("CREATE TABLE IF NOT EXISTS service (Service VARCHAR(50), Ratio INT, Init INT, Used INT, Spare INT, Type VARCHAR(50), Rate INT)");

	qry.prepare("INSERT INTO service (Service, Ratio, Init, Used, Spare, Type, Rate) VALUES (:Service, :Ratio, :Init, :Used, :Spare, :Type, :Rate)");
	qry.bindValue(":Service", x->getname());
	qry.bindValue(":Ratio", x->get_ratio_config());
	qry.bindValue(":Init", x->get_init_cash());
	qry.bindValue(":Used", x->get_used_cash());
	qry.bindValue(":Spare", x->get_spare_cash());
	qry.bindValue(":Type", x->get_type());
	qry.bindValue(":Rate", x->get_ratio_calc());

	if (!qry.exec()) {
		qDebug() << "Error insert into service";
		qDebug() << qry.lastError().text();
		exit;
	}
	else
		qInfo() << "Finished handle_write_sevice_db";
	db.close();
}

void finance_app::handle_write_all_services_to_db(vector <service_father *> x)
{
	int i;
	// Delete all services in database
	handle_delete_all_services_from_db();
	for (i = 0; i < x.size(); i++) {
		handle_write_one_sevice_to_db(x[i]);
	}
}

void finance_app::handle_delete_one_service_from_db(QString name)
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("./service.db");

	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}

	qDebug("Connected!");

	char name_final[20] = "'";
	strcat_s(name_final, name.toStdString().c_str());
	strcat_s(name_final, "'");
	char state[100] = "DELETE FROM service WHERE Service = ";
	strcat_s(state, name_final);
	qInfo() << state;
	QSqlQuery qry;

	qry.prepare(state);
	if (!qry.exec()) {
		qDebug() << "Error delete a service from database";
		qDebug() << qry.lastError().text();
		exit;
	}
	else
		qInfo() << "Finished handle_delete_a_service_from_db";
	db.close();
}

void finance_app::handle_delete_all_services_from_db()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("./finance.db");

	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}
	qDebug("Connected!");
	QSqlQuery qry;
	qry.prepare("DELETE FROM service");
	if (!qry.exec()) {
		qDebug() << "Error delete all services from database";
		qDebug() << qry.lastError().text();
		exit;
	}
	else
		qInfo() << "Finished handle_delete_all_services_from_db";
	db.close();
}

//----------------------------------ITEAM-----------------------------------//

void finance_app::handle_write_one_iteam_to_db(iteam *x)
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("./iteam.db");

	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}
	qDebug("Connected!");
	QSqlQuery qry;
	//qry.prepare("CREATE TABLE IF NOT EXISTS iteam (Service VARCHAR(50), Iteam VARCHAR(50), Cash INT, Date VARCHAR(50), Note VARCHAR(50))");
	//	qry.prepare("INSERT INTO service (Service, Ratio, Init, Used, Spare, Rate) VALUES (:Service , :Ratio, :Init, :Used, :Spare, :Rate)");
	qInfo() << "here";

	qInfo() << x->get_name_iteam();
	qInfo() << x->get_name_service();
	qInfo() << x->get_cash_out();
	qInfo() << x->get_date();
	qInfo() << x->get_note_iteam_in();

	/*qry.prepare("INSERT INTO service (Service, Ratio, Init, Used, Spare, Rate) VALUES (:Service , :Ratio, :Init, :Used, :Spare, :Rate)");
	qry.bindValue(":Service", x->getname());
	qry.bindValue(":Ratio", x->get_ratio_config());
	qry.bindValue(":Init", x->get_init_cash());
	qry.bindValue(":Used", x->get_used_cash());
	qry.bindValue(":Spare", x->get_spare_cash());
	qry.bindValue(":Rate", x->get_ratio_calc());*/


	qry.prepare("INSERT INTO iteam (Service, Iteam, Cash, Date, Note) VALUES (:Service, :Iteam, :Cash, :Date, :Note)");
	qry.bindValue(":Service", x->get_name_service());
	qry.bindValue(":Iteam", x->get_name_iteam());
	qry.bindValue(":Cash", x->get_cash_out());
	qry.bindValue(":Date", x->get_date());
	qry.bindValue(":Note", x->get_note_iteam_in());

	if (!qry.exec()) {
		qDebug() << "Error insert into iteam";
		qDebug() << qry.lastError().text();
		exit;
	}
	else
		qInfo() << "Finished handle_write_one_iteam_to_db";
	db.close();
}

void finance_app::handle_write_all_iteams_to_db(vector <iteam *> y)
{
	int i;
	handle_delete_all_iteams_from_db();
	for (i = 0; i < y.size(); i++) {
		handle_write_one_iteam_to_db(y[i]);
	}
}


void finance_app::handle_delete_all_iteams_from_db()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("./iteam.db");

	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}
	qDebug("Connected!");
	QSqlQuery qry;
	qry.prepare("DELETE FROM iteam");
	if (!qry.exec()) {
		qDebug() << "Error delete all iteams from database";
		qDebug() << qry.lastError().text();
		exit;
	}
	else
		qInfo() << "Finish in handle_delete_all_iteams_from_db";
	db.close();
}

iteam * finance_app::handle_read_one_iteam_database(QString name)
{
	/*QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("./iteam.db");
	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}
	qDebug("Connected!");*/
	iteam *x = new iteam;
	char name_final[20] = "'";
	strcat_s(name_final, name.toStdString().c_str());
	strcat_s(name_final, "'");
	char state[100] = "SELECT * FROM iteam WHERE Service = ";
	strcat_s(state, name_final);
	qInfo() << state;
	QSqlQuery qry;

	qry.prepare(state);
	if (!qry.exec()) {
		qDebug() << qry.lastError();
		exit;
	}
	else
	{
		while (qry.next()) {
			x->set_name_service(qry.value(0).toString());
			x->set_name_iteam(qry.value(1).toString());
			x->set_cash_out(qry.value(2).toInt());
			x->set_date(qry.value(3).toString());
			x->set_note_iteam_in(qry.value(4).toString());
		}
	}
	qInfo() << "Finished handle_read_one_iteam_database";
	//db.close();
	return x;
}

vector <iteam *> finance_app::handle_read_all_iteams_in_db()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

	db.setDatabaseName("./iteam.db");

	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}
	qInfo() << "Connected";
	vector <iteam *> x;
	vector <QString> y;
	vector <QString> w;
	QSqlQuery qry;
	iteam *z;
	char name_final[20] = "'";
	int i, j;
	qry.prepare("SELECT Service FROM iteam ORDER BY Service ASC");
	if (!qry.exec())
	{
		qDebug() << qry.lastError().text();
		exit;
	}
	if (!qry.next()) {
		return x;
	}
	else {
		qry.previous();
		while (qry.next()) {
			qInfo() << "Iteam: " << qry.value(0);
			y.push_back(qry.value(0).toString());
		}
		w.push_back(y[0]);
		for (i = 1; i < y.size(); i++) {
			if (y[i].compare(y[i - 1]) != 0) {
				w.push_back(y[i]);
			}
		}
		for (i = 0; i < w.size(); i++) {
			char name_final[20] = "'";
			strcat_s(name_final, w[i].toStdString().c_str());
			strcat_s(name_final, "'");
			char state[100] = "SELECT * FROM iteam WHERE Service = ";
			strcat_s(state, name_final);
			QSqlQuery qry;

			qry.prepare(state);
			if (!qry.exec()) {
				qDebug() << qry.lastError();
				exit;
			}
			else
			{
				while (qry.next()) {
					z = new iteam;
					z->set_name_service(qry.value(0).toString());
					z->set_name_iteam(qry.value(1).toString());
					z->set_cash_out(qry.value(2).toInt());
					z->set_date(qry.value(3).toString());
					z->set_note_iteam_in(qry.value(4).toString());
					x.push_back(z);
				}
			}
		}
		return x;
	}
	db.close();
	qInfo() << "Finish in handle_read_all_iteams_in_db";
}


void finance_app::handle_delete_one_iteam_from_db(QString name)
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("./iteam.db");

	if (!db.open())
	{
		qDebug() << db.lastError();
		qFatal("Failed to connect.");
	}

	qDebug("Connected!");

	char name_final[20] = "'";
	strcat_s(name_final, name.toStdString().c_str());
	strcat_s(name_final, "'");
	char state[100] = "DELETE FROM iteam WHERE Iteam = ";
	strcat_s(state, name_final);
	qInfo() << state;
	QSqlQuery qry;

	qry.prepare(state);
	if (!qry.exec()) {
		qDebug() << "Error delete a service from database";
		qDebug() << qry.lastError().text();
		exit;
	}
	else
		qInfo() << "Finished handle_delete_a_service_from_db";
	db.close();
}