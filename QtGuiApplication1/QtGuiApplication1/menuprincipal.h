#pragma once

#include <QDialog>
#include "ui_menuprincipal.h"
#include <Produto.h>
#include "Hash.h"

class menuPrincipal : public QDialog
{
	Q_OBJECT
private:
	Hash<Produto>* produtos = new Hash<Produto>(1000);
	Ui::menuPrincipal ui;

public:
	menuPrincipal(QWidget* parent = Q_NULLPTR);
	~menuPrincipal();


private slots:
	void on_botaoInserir_clicked();
	void on_botaoListar_clicked();
	void on_botaoConsultar_clicked();
	void on_botaoExcluir_clicked();
	void on_botaoCompras_clicked();
	void on_botaoVenda_clicked();

public slots:
	void fill_hash(Produto p) {
		produtos->Insere(p);
	}
	
};
