#pragma once

#include <QDialog>
#include "ui_cadastrarvenda.h"
#include "Hash.h"
#include "Produto.h"

class cadastrarVenda : public QDialog
{
	Q_OBJECT

public:
    cadastrarVenda(QWidget* parent, Hash<Produto>* produtos);
	~cadastrarVenda();
	Hash<Produto>* produtos;
    Produto* temp;

private:
	Ui::cadastrarVenda ui;

private slots:
	void on_botaoConsulta_clicked();
	void on_botaoUpdate_clicked();
};
