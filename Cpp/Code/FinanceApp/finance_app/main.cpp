#include "finance_app.h"
//#include "new_IF.h"
//#include <QtWidgets/QApplication>
//#include <QFile>
//#include <QTreeView>

#include "treEview.h"

#include <QGuiApplication>
#include <QFile>



int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	finance_app w;

	//QFile file(":/default.txt");
	//file.open(QIODevice::ReadOnly);
	//TreeModel model(file.readAll());
	//file.close();

	//QTreeView view;
	//view.setModel(&model);
	//view.setWindowTitle(QObject::tr("Simple Tree Model"));
	//view.show();
	/*service_ui s;
	QObject::connect(&s, SIGNAL(data_from_service_ui_to_finance_ui(service_father *)), &w, SLOT(on_data_from_service_ui_to_finance_ui(service_father *)));
	s.show();*/
	w.show();
	//QTreeView *tree = new QTreeView();
	//QListView *list = new QListView();
	//QTableView *table = new QTableView();

	//QSplitter splitter;
	//splitter.addWidget(tree);
	//splitter.addWidget(list);
	//splitter.addWidget(table);

	/*QStandardItemModel model(5, 2);
	for (int r = 0; r<5; r++)
		for (int c = 0; c<2; c++)
		{
			QStandardItem *item = new QStandardItem(QString("Row:%0, Column:%1").arg(r).arg(c));

			if (c == 0)
				for (int i = 0; i<3; i++)
				{
					QStandardItem *child = new QStandardItem(QString("Item %0").arg(i));
					child->setEditable(false);
					item->appendRow(child);
				}

			model.setItem(r, c, item);
		}

	model.setHorizontalHeaderItem(0, new QStandardItem("Foo"));
	model.setHorizontalHeaderItem(1, new QStandardItem("Bar-Baz"));

	tree->setModel(&model);
	tree->show();*/
	//list->setModel(&model);
	//table->setModel(&model);

	//list->setSelectionModel(tree->selectionModel());
	//table->setSelectionModel(tree->selectionModel());

	//table->setSelectionBehavior(QAbstractItemView::SelectRows);
	//table->setSelectionMode(QAbstractItemView::SingleSelection);

	//splitter.show();

	//treEView t;
	//t.show();
	return a.exec();
}
