#pragma once
#include <iostream>
template<typename T>
class IHash {
public:
	virtual bool Insere(T chave) = 0;
    virtual bool Remove(std::string chave) = 0;
    virtual bool Contem(T chave) = 0;
    virtual std::string Imprime() = 0;
	virtual ~IHash() { }
};
