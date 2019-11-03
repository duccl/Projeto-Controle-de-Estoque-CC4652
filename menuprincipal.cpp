#include "menuprincipal.h"
#include <QMessageBox>
#include "insere_form.h"
#include "excluir_form.h"
#include "listar_form.h"
#include "consulta_form.h"
#include "cadastrarcompra.h"
#include "listadecompras.h"
#include "cadastrarvenda.h"
#include "LES_v2.h"

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
    consulta_form consulta(this, this->produtos);
    consulta.exec();
}

void menuPrincipal::on_botaoExcluir_clicked() {
    excluir_form excluir(this, this->produtos);
    excluir.exec();
}

void menuPrincipal::on_botaoCompras_clicked() {
    cadastrarCompra compra(this, this->produtos);
    compra.exec();
}

void menuPrincipal::on_botaoVenda_clicked() {
    cadastrarVenda venda(this,this->produtos);
    venda.exec();
}

void menuPrincipal::on_botaoListaDeCompras_clicked(){
    LES<Produto>* lista_compras = new LES<Produto>(this->produtos->get_size()+1);

    this->produtos->lista_compras(lista_compras);

    QString compras = QString::fromStdString(lista_compras->print());

    listadecompras minhaLista(this,compras);
    minhaLista.exec();
    delete lista_compras;
}



