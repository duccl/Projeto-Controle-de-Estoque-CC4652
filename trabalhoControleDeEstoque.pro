QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

RESOURCES += QtGuiApplication1.qrc

SOURCES += \
    main.cpp \
    QtGuiApplication1.cpp \
    menuprincipal.cpp \
    insere_form.cpp \
    excluir_form.cpp \
    listar_form.cpp \
    consulta_form.cpp \
    cadastrarcompra.cpp

HEADERS += \
    QtGuiApplication1.h \
    menuprincipal.h \
    insere_form.h \
    Hash.h \
    IHash.h \
    Ilista.h \
    LDDE.h \
    LDE.h \
    Produto.h \
    excluir_form.h \
    listar_form.h \
    consulta_form.h \
    cadastrarcompra.h

FORMS += \
    QtGuiApplication1.ui \
    menuprincipal.ui \
    insere_form.ui \
    excluir_form.ui \
    listar_form.ui \
    consulta_form.ui \
    cadastrarcompra.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
