#include "cadastrarcompra.h"
#include "Hash.h"
#include "Produto.h"
#include <QMessageBox>

//C:\Users\ecoltri\Downloads\Projeto-Controle-de-Estoque-CC4652-duccl-homologacao_v2 (2)\Projeto-Controle-de-Estoque-CC4652-duccl-homologacao_v2
cadastrarCompra::cadastrarCompra(QWidget *parent, Hash<Produto>* produtos)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->produtos = produtos;
}

void cadastrarCompra::on_botaoConsulta_clicked() {

	if (ui.consultaNomeProduto->text().isEmpty()) {
		ui.retornoProduto->setText("<font color = 'red' size=5> O NOME NAO PODE ESTAR EM BRANCO</font>");
		return;
	}

	string nome_produto = ui.consultaNomeProduto->text().toLower().toUtf8().constData();
    this->temp = &(this->produtos->Contem(nome_produto));
    if (!temp->empty()) {
		ui.botaoUpdate->setEnabled(true);
		ui.novaQuantidade->setEnabled(true);
	}
	else {
        ui.botaoUpdate->setEnabled(false);
        ui.novaQuantidade->setEnabled(false);
		ui.retornoProduto->setText("<font color='red' size = 4>Produto nao foi encontrado!</font>");
	}
}

void cadastrarCompra::on_botaoUpdate_clicked() {
	int nova_quantidade = ui.novaQuantidade->value();
    this->temp->set_quantidade_atual(nova_quantidade);
	ui.retornoProduto->setText("<font color='green' size = 4>Quantidade atualizada</font>");
}

cadastrarCompra::~cadastrarCompra()
{
}
