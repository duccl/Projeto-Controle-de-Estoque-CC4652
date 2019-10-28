/********************************************************************************
** Form generated from reading UI file 'menuprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPRINCIPAL_H
#define UI_MENUPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menuPrincipal
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QProgressBar *porcentagemDoEstoque;
    QPushButton *botaoInserir;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *botaoExcluir;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *botaoConsultar;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *botaoListar;
    QSpacerItem *horizontalSpacer;
    QPushButton *botaoVenda;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *botaoCompras;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *botaoListaDeCompras;

    void setupUi(QDialog *menuPrincipal)
    {
        if (menuPrincipal->objectName().isEmpty())
            menuPrincipal->setObjectName(QString::fromUtf8("menuPrincipal"));
        menuPrincipal->setWindowModality(Qt::NonModal);
        menuPrincipal->setEnabled(true);
        menuPrincipal->resize(546, 523);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(menuPrincipal->sizePolicy().hasHeightForWidth());
        menuPrincipal->setSizePolicy(sizePolicy);
        menuPrincipal->setSizeGripEnabled(false);
        menuPrincipal->setModal(true);
        verticalLayoutWidget = new QWidget(menuPrincipal);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 521, 424));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        porcentagemDoEstoque = new QProgressBar(verticalLayoutWidget);
        porcentagemDoEstoque->setObjectName(QString::fromUtf8("porcentagemDoEstoque"));
        porcentagemDoEstoque->setValue(0);

        formLayout->setWidget(2, QFormLayout::LabelRole, porcentagemDoEstoque);


        verticalLayout->addLayout(formLayout);

        botaoInserir = new QPushButton(verticalLayoutWidget);
        botaoInserir->setObjectName(QString::fromUtf8("botaoInserir"));

        verticalLayout->addWidget(botaoInserir);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        botaoExcluir = new QPushButton(verticalLayoutWidget);
        botaoExcluir->setObjectName(QString::fromUtf8("botaoExcluir"));

        verticalLayout->addWidget(botaoExcluir);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_3);

        botaoConsultar = new QPushButton(verticalLayoutWidget);
        botaoConsultar->setObjectName(QString::fromUtf8("botaoConsultar"));

        verticalLayout->addWidget(botaoConsultar);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_4);

        botaoListar = new QPushButton(verticalLayoutWidget);
        botaoListar->setObjectName(QString::fromUtf8("botaoListar"));

        verticalLayout->addWidget(botaoListar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        botaoVenda = new QPushButton(verticalLayoutWidget);
        botaoVenda->setObjectName(QString::fromUtf8("botaoVenda"));

        verticalLayout->addWidget(botaoVenda);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_5);

        botaoCompras = new QPushButton(verticalLayoutWidget);
        botaoCompras->setObjectName(QString::fromUtf8("botaoCompras"));

        verticalLayout->addWidget(botaoCompras);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_6);

        botaoListaDeCompras = new QPushButton(verticalLayoutWidget);
        botaoListaDeCompras->setObjectName(QString::fromUtf8("botaoListaDeCompras"));

        verticalLayout->addWidget(botaoListaDeCompras);


        retranslateUi(menuPrincipal);

        QMetaObject::connectSlotsByName(menuPrincipal);
    } // setupUi

    void retranslateUi(QDialog *menuPrincipal)
    {
        menuPrincipal->setWindowTitle(QApplication::translate("menuPrincipal", "menuPrincipal", nullptr));
        label->setText(QApplication::translate("menuPrincipal", "Porcentagem ocupada do estoque", nullptr));
        botaoInserir->setText(QApplication::translate("menuPrincipal", "Inserir Novo Produto", nullptr));
        botaoExcluir->setText(QApplication::translate("menuPrincipal", "Excluir Produto", nullptr));
        botaoConsultar->setText(QApplication::translate("menuPrincipal", "Consultar Produtos", nullptr));
        botaoListar->setText(QApplication::translate("menuPrincipal", "Listar Produtos", nullptr));
        botaoVenda->setText(QApplication::translate("menuPrincipal", "Cadastrar Venda", nullptr));
        botaoCompras->setText(QApplication::translate("menuPrincipal", "Cadastrar Compra", nullptr));
        botaoListaDeCompras->setText(QApplication::translate("menuPrincipal", "Lista de Compras", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuPrincipal: public Ui_menuPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPRINCIPAL_H
