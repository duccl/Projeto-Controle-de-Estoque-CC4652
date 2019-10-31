/********************************************************************************
** Form generated from reading UI file 'listar_form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTAR_FORM_H
#define UI_LISTAR_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listar_form
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QWidget *listar_form)
    {
        if (listar_form->objectName().isEmpty())
            listar_form->setObjectName(QString::fromUtf8("listar_form"));
        listar_form->resize(400, 300);
        textBrowser = new QTextBrowser(listar_form);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 11, 381, 281));

        retranslateUi(listar_form);

        QMetaObject::connectSlotsByName(listar_form);
    } // setupUi

    void retranslateUi(QWidget *listar_form)
    {
        listar_form->setWindowTitle(QApplication::translate("listar_form", "teste", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listar_form: public Ui_listar_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAR_FORM_H
