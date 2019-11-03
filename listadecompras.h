#pragma once
#include <QDialog>
#include "ui_listadecompras.h"

class listadecompras : public QDialog
{
    Q_OBJECT

public:
    listadecompras(QWidget *parent,QString saida);
    ~listadecompras();

private:
    Ui::listadecompras ui;
};
