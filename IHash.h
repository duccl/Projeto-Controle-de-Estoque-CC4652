#pragma once
template<typename T>
class IHash {
public:
	virtual bool Insere(T chave) = 0;
	virtual bool Remove(string chave) = 0;
	virtual bool Contem(T& chave) = 0;
	virtual string Imprime() = 0;
	virtual ~IHash() { }
};