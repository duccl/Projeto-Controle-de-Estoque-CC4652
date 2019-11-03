#include "insere_form.h"
#include "Hash.h"
#include "Produto.h"
#include <QDebug>
#include "menuprincipal.h"
#include "LES_v2.h"

insere_form::insere_form(QWidget *parent,Hash<Produto>* produtos)
	: QDialog(parent)
{
	ui.setupUi(this);
    this->produtos = produtos;
}

void insere_form::on_botaoCadastra_clicked() {
	if (ui.nomeProduto->text().isEmpty()) {
		ui.retorno->setText("<font color = 'red' size=5> O NOME NAO PODE ESTAR EM BRANCO</font>");
		return;
	}

	string nome_produto = ui.nomeProduto->text().toLower().toUtf8().constData();
	int quantidadeMinima = ui.quantidadeMinimaProduto->value();
	double preco = ui.spinBoxPreco->value();
	int tamanho = ui.nivelPrioridade->value();
	Produto p(nome_produto, 0,tamanho,quantidadeMinima, preco);

	if (this->produtos->Insere(p)) {
		ui.retorno->setText("<font color = 'green' size=5>Produto Cadastrado!</font>");
	}
	else {
		ui.retorno->setText("<font color = 'red' size=5> ERRO NO CADASTRO </font>");
	}
}

insere_form::~insere_form()
{
}
