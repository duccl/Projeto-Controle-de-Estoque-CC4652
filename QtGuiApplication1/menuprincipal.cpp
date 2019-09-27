#include "menuprincipal.h"
#include <QMessageBox>


menuPrincipal::menuPrincipal(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
}
menuPrincipal::~menuPrincipal(){}

int menuPrincipal::on_botaoInserir_clicked() {
	int valor = menuPrincipal::porcentagemDoEstoque->value();
	valor = (valor + 1) % menuPrincipal::porcentagemDoEstoque->maximum();
	menuPrincipal::porcentagemDoEstoque->setValue(valor);
	return 1;
}



