#pragma once

#include <QDialog>
#include "ui_consulta_form.h"
#include "Hash.h"
#include "Produto.h"

class consulta_form : public QDialog
{
	Q_OBJECT

public:
	consulta_form(QWidget* parent, Hash<Produto>*& produtos);
	~consulta_form();

private:
	Hash<Produto>* produtos;
	Ui::consulta_form ui;

private slots:
	void on_botaoConsulta_clicked();
};
