#include "QtGuiApplication1.h"
#include "menuprincipal.h"
#include <string>
#include <fstream>
#include <QMessageBox>

QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void QtGuiApplication1::on_botaoLogin_clicked(){
	string usuario = ui.lineEdit->text().toUtf8().constData();
	string senha = ui.lineEdit_2->text().toUtf8().constData();
    if (QtGuiApplication1::users.busca(usuario, senha) != -1) {
        ui.label_4->setText("<font color = 'green' size=4>Login efetuado com sucesso!</font>");
		menuPrincipal menu(this);
		menu.exec();
	}
	else {
		ui.label_4->setText("<font color = 'red' size=8> User and/or Password Incorrect </font>");
	}
}	

void QtGuiApplication1::on_aboutLogin_clicked(){
    QMessageBox sobreLogin;
    sobreLogin.setText("Se voce for admin, para saber usuario e senha deve olhar o arquivo bd.txt."
                       "O padrao é user;senha no arquivo.");
    sobreLogin.setWindowTitle("About");
    sobreLogin.exec();
}
