/********************************************************************************
** Form generated from reading UI file 'insere_form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERE_FORM_H
#define UI_INSERE_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_insere_form
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nomeProduto;
    QLabel *label_3;
    QSpinBox *quantidadeMinimaProduto;
    QLabel *label_4;
    QSpinBox *nivelPrioridade;
    QPushButton *botaoCadastra;
    QLabel *retorno;
    QLabel *label_2;
    QDoubleSpinBox *spinBoxPreco;

    void setupUi(QDialog *insere_form)
    {
        if (insere_form->objectName().isEmpty())
            insere_form->setObjectName(QString::fromUtf8("insere_form"));
        insere_form->resize(512, 310);
        formLayoutWidget = new QWidget(insere_form);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(70, 10, 381, 271));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nomeProduto = new QLineEdit(formLayoutWidget);
        nomeProduto->setObjectName(QString::fromUtf8("nomeProduto"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nomeProduto);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        quantidadeMinimaProduto = new QSpinBox(formLayoutWidget);
        quantidadeMinimaProduto->setObjectName(QString::fromUtf8("quantidadeMinimaProduto"));

        formLayout->setWidget(1, QFormLayout::FieldRole, quantidadeMinimaProduto);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        nivelPrioridade = new QSpinBox(formLayoutWidget);
        nivelPrioridade->setObjectName(QString::fromUtf8("nivelPrioridade"));

        formLayout->setWidget(2, QFormLayout::FieldRole, nivelPrioridade);

        botaoCadastra = new QPushButton(formLayoutWidget);
        botaoCadastra->setObjectName(QString::fromUtf8("botaoCadastra"));

        formLayout->setWidget(6, QFormLayout::FieldRole, botaoCadastra);

        retorno = new QLabel(formLayoutWidget);
        retorno->setObjectName(QString::fromUtf8("retorno"));

        formLayout->setWidget(7, QFormLayout::FieldRole, retorno);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        spinBoxPreco = new QDoubleSpinBox(formLayoutWidget);
        spinBoxPreco->setObjectName(QString::fromUtf8("spinBoxPreco"));

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBoxPreco);


        retranslateUi(insere_form);

        QMetaObject::connectSlotsByName(insere_form);
    } // setupUi

    void retranslateUi(QDialog *insere_form)
    {
        insere_form->setWindowTitle(QApplication::translate("insere_form", "insere_form", nullptr));
        label->setText(QApplication::translate("insere_form", "Nome Do produto", nullptr));
        label_3->setText(QApplication::translate("insere_form", "Quantidade M\303\255nima", nullptr));
        label_4->setText(QApplication::translate("insere_form", "Tamanho", nullptr));
        botaoCadastra->setText(QApplication::translate("insere_form", "Cadastrar", nullptr));
        retorno->setText(QString());
        label_2->setText(QApplication::translate("insere_form", "Pre\303\247o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class insere_form: public Ui_insere_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERE_FORM_H
