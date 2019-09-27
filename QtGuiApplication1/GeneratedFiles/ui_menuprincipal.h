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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menuPrincipal
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QProgressBar *porcentagemDoEstoque;
    QLabel *label;
    QPushButton *botaoInserir;
    QPushButton *botaoExcluir;
    QPushButton *botaoConsultar;

    void setupUi(QDialog *menuPrincipal)
    {
        if (menuPrincipal->objectName().isEmpty())
            menuPrincipal->setObjectName(QString::fromUtf8("menuPrincipal"));
        menuPrincipal->setWindowModality(Qt::NonModal);
        menuPrincipal->setEnabled(true);
        menuPrincipal->resize(403, 296);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(menuPrincipal->sizePolicy().hasHeightForWidth());
        menuPrincipal->setSizePolicy(sizePolicy);
        menuPrincipal->setSizeGripEnabled(false);
        menuPrincipal->setModal(true);
        verticalLayoutWidget = new QWidget(menuPrincipal);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 359, 259));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        porcentagemDoEstoque = new QProgressBar(verticalLayoutWidget);
        porcentagemDoEstoque->setObjectName(QString::fromUtf8("porcentagemDoEstoque"));
        porcentagemDoEstoque->setValue(0);

        formLayout->setWidget(2, QFormLayout::LabelRole, porcentagemDoEstoque);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);


        verticalLayout->addLayout(formLayout);

        botaoInserir = new QPushButton(verticalLayoutWidget);
        botaoInserir->setObjectName(QString::fromUtf8("botaoInserir"));

        verticalLayout->addWidget(botaoInserir);

        botaoExcluir = new QPushButton(verticalLayoutWidget);
        botaoExcluir->setObjectName(QString::fromUtf8("botaoExcluir"));

        verticalLayout->addWidget(botaoExcluir);

        botaoConsultar = new QPushButton(verticalLayoutWidget);
        botaoConsultar->setObjectName(QString::fromUtf8("botaoConsultar"));

        verticalLayout->addWidget(botaoConsultar);


        retranslateUi(menuPrincipal);

        QMetaObject::connectSlotsByName(menuPrincipal);
    } // setupUi

    void retranslateUi(QDialog *menuPrincipal)
    {
        menuPrincipal->setWindowTitle(QApplication::translate("menuPrincipal", "menuPrincipal", nullptr));
        label->setText(QApplication::translate("menuPrincipal", "Porcentagem ocupada do estoque", nullptr));
        botaoInserir->setText(QApplication::translate("menuPrincipal", "Inserir", nullptr));
        botaoExcluir->setText(QApplication::translate("menuPrincipal", "Excluir", nullptr));
        botaoConsultar->setText(QApplication::translate("menuPrincipal", "Consultar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuPrincipal: public Ui_menuPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPRINCIPAL_H
