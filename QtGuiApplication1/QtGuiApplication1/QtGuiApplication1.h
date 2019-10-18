#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication1.h"
#include "LDDE.h"
#include <string>



class QtGuiApplication1 : public QMainWindow
{
	Q_OBJECT
	
public:
	QtGuiApplication1(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGuiApplication1Class ui;
	LDDE<string> users;

	void init() {
		users.get_fill("bd.txt");
	}

protected slots:
	void on_botaoLogin_clicked();
};
