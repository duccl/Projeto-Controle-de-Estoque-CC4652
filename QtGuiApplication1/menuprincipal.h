#pragma once

#include <QDialog>
#include "ui_menuprincipal.h"

class menuPrincipal : public QDialog, public Ui::menuPrincipal
{
	Q_OBJECT

public:
	menuPrincipal(QWidget *parent = Q_NULLPTR);
	~menuPrincipal();

private slots:
	int on_botaoInserir_clicked();
};
