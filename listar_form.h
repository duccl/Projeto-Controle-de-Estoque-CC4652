#pragma once

#include <QDialog>
#include "ui_listar_form.h"
#include "Hash.h"
#include "Produto.h"

class listar_form : public QDialog
{
	Q_OBJECT

public:
	listar_form(QWidget* parent, QString str);
	Hash<Produto>* produtos;
	~listar_form();
private:
	Ui::listar_form ui;
};
