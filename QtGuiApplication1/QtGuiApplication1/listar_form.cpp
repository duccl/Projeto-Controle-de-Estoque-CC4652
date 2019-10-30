#include "listar_form.h"

listar_form::listar_form(QWidget *parent,QString str)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.textBrowser->setText(str);
}

listar_form::~listar_form()
{

}
