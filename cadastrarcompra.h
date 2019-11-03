#pragma once

#include <QDialog>
#include "ui_cadastrarcompra.h"
#include "Hash.h"
#include "Produto.h"

class cadastrarCompra : public QDialog
{
	Q_OBJECT

public:
    cadastrarCompra(QWidget *parent,Hash<Produto>* produtos);
	~cadastrarCompra();
	Hash<Produto>* produtos;
    Produto* temp;

private:
	Ui::cadastrarCompra ui;

private slots:
	void on_botaoConsulta_clicked();
	void on_botaoUpdate_clicked();
};
