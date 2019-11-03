#include "listadecompras.h"


listadecompras::listadecompras(QWidget *parent,QString saida) :
    QDialog(parent)
{
    ui.setupUi(this);
    ui.saida->setText(saida);
}

listadecompras::~listadecompras()
{

}
