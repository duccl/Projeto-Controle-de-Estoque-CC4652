#pragma once
#include <iostream>
template <typename T>
class ILista {
public:
	virtual bool Insere(T chave) = 0;
    virtual int Busca(T chave) = 0;
	virtual bool Remove(int) = 0;
    virtual std::string* Imprime() = 0;
    virtual ~ILista() {}
};
