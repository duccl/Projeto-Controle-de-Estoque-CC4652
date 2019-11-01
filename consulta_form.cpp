#include "consulta_form.h"
#include "Hash.h"
#include "Produto.h"

consulta_form::consulta_form(QWidget *parent, Hash<Produto>*& produtos)
	: QDialog(parent)
{
	this->produtos = produtos;
	ui.setupUi(this);
	ui.textBrowser->setVisible(false);
}

consulta_form::~consulta_form()
{
}

void consulta_form::on_botaoConsulta_clicked() {

	if (ui.consultaNomeProduto->text().isEmpty()) {
		ui.retorno->setText("<font color = 'red' size=4> O NOME NAO PODE ESTAR EM BRANCO</font>");
		return;
	}

	string nome_produto = ui.consultaNomeProduto->text().toLower().toUtf8().constData();
    Produto p = this->produtos->Contem(nome_produto);
    if (!p.empty()) {
		ui.textBrowser->setVisible(true);
        QString qstr = QString::fromStdString(p.Imprime());
		ui.textBrowser->setText(qstr);
	}
	else {
        ui.textBrowser->setVisible(false);
        ui.textBrowser->clear();
		ui.retorno->setText("<font color = 'red' size=4>Produto nao encontrado!</font>");
		return;
	}

}
