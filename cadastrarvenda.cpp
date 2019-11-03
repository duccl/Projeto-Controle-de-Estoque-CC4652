#include "cadastrarvenda.h"
#include "Hash.h"
#include "Produto.h"
#include <QMessageBox>

cadastrarVenda::cadastrarVenda(QWidget *parent, Hash<Produto>* produtos)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->produtos = produtos;
}

void cadastrarVenda::on_botaoConsulta_clicked() {

	if (ui.consultaNomeProduto->text().isEmpty()) {
		ui.retornoProduto->setText("<font color = 'red' size=5> O NOME NAO PODE ESTAR EM BRANCO!</font>");
		return;
	}

	string nome_produto = ui.consultaNomeProduto->text().toLower().toUtf8().constData();
    this->temp = &(this->produtos->Contem(nome_produto));
    if (!temp->empty()) {
		ui.botaoUpdate->setEnabled(true);
		ui.novaQuantidade->setEnabled(true);
	}
	else {
		ui.retornoProduto->setText("<font color='red' size = 4>Produto nao foi encontrado!</font>");
	}
}

void cadastrarVenda::on_botaoUpdate_clicked() {
	int nova_quantidade = ui.novaQuantidade->value();
    this->temp->set_quantidade_atual(nova_quantidade*-1);
	ui.retornoProduto->setText("<font color='green' size = 4>Quantidade atualizada</font>");
}

cadastrarVenda::~cadastrarVenda()
{
}
