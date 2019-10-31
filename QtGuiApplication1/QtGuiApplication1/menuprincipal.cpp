#include "menuprincipal.h"
#include <QMessageBox>
#include "insere_form.h"
#include "excluir_form.h"
#include "listar_form.h"


menuPrincipal::menuPrincipal(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

}
menuPrincipal::~menuPrincipal(){}

void menuPrincipal::on_botaoInserir_clicked() {
    insere_form teste(this,this->produtos);
    teste.exec();
}


void menuPrincipal::on_botaoListar_clicked() {
    QString lista = QString::fromStdString(this->produtos->Imprime());
    listar_form listador(this,lista);
    listador.exec();
}

void menuPrincipal::on_botaoConsultar_clicked() {
	
}

void menuPrincipal::on_botaoExcluir_clicked() {
    excluir_form excluir(this, this->produtos);
    excluir.exec();
}

void menuPrincipal::on_botaoCompras_clicked() {
	
}

void menuPrincipal::on_botaoVenda_clicked() {
	
}



