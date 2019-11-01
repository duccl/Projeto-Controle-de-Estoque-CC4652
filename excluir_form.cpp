#include "excluir_form.h"
#include "Produto.h"
#include "Hash.h"
excluir_form::excluir_form(QWidget *parent, Hash<Produto>* hash)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->produtos = hash;
}

void excluir_form::on_botaoExcluir_clicked() {


	if (ui.consultaNomeProduto->text().isEmpty()) {
		ui.retorno->setText("<font color = 'red' size=4> O NOME NAO PODE ESTAR EM BRANCO</font>");
		return;
	}

	string nome_produto = ui.consultaNomeProduto->text().toLower().toUtf8().constData();
	if (this->produtos->Remove(nome_produto)) {
		ui.retorno->setText("<font color='green' size = 4> Produto Removido </font>");
	}
	else {
        ui.retorno->setText("<font color='red' size = 4>Nao foi possivel remover o Produto ou este nao existe</font>");
	}
}

excluir_form::~excluir_form()
{
}
