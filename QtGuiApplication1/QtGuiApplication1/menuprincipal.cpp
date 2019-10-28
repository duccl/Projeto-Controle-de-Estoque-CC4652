#include "menuprincipal.h"
#include <QMessageBox>
#include "insere_form.h"


menuPrincipal::menuPrincipal(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

}
menuPrincipal::~menuPrincipal(){}

void menuPrincipal::on_botaoInserir_clicked() {
	insere_form teste(this);
	teste.produtos = this->produtos;
	teste.exec();	
}


void menuPrincipal::on_botaoListar_clicked() {
	
}

void menuPrincipal::on_botaoConsultar_clicked() {
	
}

void menuPrincipal::on_botaoExcluir_clicked() {
	
}

void menuPrincipal::on_botaoCompras_clicked() {
	
}

void menuPrincipal::on_botaoVenda_clicked() {
	
}



