#pragma once
#ifndef WINDOW_H
#define WINDOW_H
#include <QMainWindow>
#include <finance_app.h>
class QAction;
class QTreeWidget;
class QTreeWidgetItem;
class treEView : public QMainWindow
{
	Q_OBJECT
public:
	treEView (QWidget *parent = Q_NULLPTR);
	//MainWindow();
public slots:
	void findItems();
	void insertItem();
	void removeItem();
	void sortAscending();
	void sortDescending();
	void updateMenus(QTreeWidgetItem *current);
	void updateSortItems();
private:
	void setupTreeItems();
	QAction *ascendingAction;
	QAction *autoSortAction;
	QAction *descendingAction;
	QAction *insertAction;
	QAction *removeAction;
	QTreeWidget *treeWidget;
};
#endif



