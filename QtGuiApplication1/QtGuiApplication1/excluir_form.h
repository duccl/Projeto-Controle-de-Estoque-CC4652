#pragma once

#include <QDialog>
#include "ui_excluir_form.h"
#include "Produto.h"
#include "Hash.h"

class excluir_form : public QDialog
{
	Q_OBJECT

public:
	excluir_form(QWidget *parent, Hash<Produto>*& hash);
	~excluir_form();
	Hash<Produto>* produtos;

private:
	Ui::excluir_form ui;

private slots:
	void on_botaoExcluir_clicked();
};
