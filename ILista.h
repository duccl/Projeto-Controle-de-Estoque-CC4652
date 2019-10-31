#pragma once
template <typename T>
class ILista {
public:
	virtual bool Insere(T chave) = 0;
	virtual int Busca(string chave, T objeto) = 0;
	virtual bool Remove(int) = 0;
	virtual string* Imprime() = 0;
	virtual ~ILista() {};
};