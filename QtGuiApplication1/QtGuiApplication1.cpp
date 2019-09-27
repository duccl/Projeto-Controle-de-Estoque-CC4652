#include "QtGuiApplication1.h"
#include "menuprincipal.h"
#include <string>

QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void QtGuiApplication1::on_botaoLogin_clicked(){

	//VERFICACAO DO LOGIN VEM AQUI

	QtGuiApplication1::setVisible(false);
	menuPrincipal menu(this);
	menu.exec();
}	


