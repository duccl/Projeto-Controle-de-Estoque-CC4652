#pragma once

#include <QDialog>
#include "ui_insere_form.h"
#include "Hash.h"
#include "Produto.h"

class insere_form : public QDialog
{
	Q_OBJECT

public:
    insere_form(QWidget *parent,Hash<Produto>* produtos);
	~insere_form();
	Hash<Produto>* produtos;

private:
	Ui::insere_form ui;
	
	
private slots:
	void on_botaoCadastra_clicked();
};
