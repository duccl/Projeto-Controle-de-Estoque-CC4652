#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication1.h"
#include "LDE.h"
#include <string>



class QtGuiApplication1 : public QMainWindow
{
	Q_OBJECT
	
public:
	QtGuiApplication1(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtGuiApplication1Class ui;
	LDE<string> users;

protected slots:
	void on_botaoLogin_clicked();
};
