#pragma once
#include <iostream>
#include "LDDE.h"
#include "Produto.h"
#include "IHash.h"
using namespace std;
template<typename T>
class Hash : public IHash<T> {
private:
    LDDE<T>* hashTable;
    int tamanho;
    int limite;

    int soma_de_chars(string str) {
		if (str.empty()) {
			return -1;
		}

		int value = 0;
		for (int i = 0; i < str.size(); i++) {
			value += str[i];
		}
		return value;
	}

    int funcaoHash(string str) {
		return soma_de_chars(str) % tamanho;
	}
public:
    Hash(int new_tamanho) {
        tamanho = new_tamanho;
        limite = 0;
        hashTable = new LDDE<T>[tamanho];
	}

    bool Insere(T p) {
        if (Contem(p) || limite >= (tamanho + tamanho * 0.5)) {
			return false;
		}
        hashTable[funcaoHash(p.get_nome_produto())].Insere(p);
        limite++;
		return true;
	}

    bool Contem(T& p) {
        if (hashTable[funcaoHash(p.get_nome_produto())].Busca(p.get_nome_produto(),p) != -1) {
            return true;
		}
		return false;
	}

    int posicao(string nome_produto) {
        return hashTable[funcaoHash(nome_produto)].Busca(nome_produto,Produto());
	}

    T& Contem(string nome_produto) {
        return hashTable[funcaoHash(nome_produto)].get_produto(posicao(nome_produto));
	}

    string Imprime() {
		string teste;
        for (int i = 0; i < tamanho; ++i) {
            for (int j = 0; j < hashTable[i].get_size(); j++) {
                teste.append((hashTable[i].Imprime())[j]);
			}
		}
		return teste;
	}

    bool Remove(string nome_produto) {
		if (Contem(nome_produto).get_nome_produto() != "vazio") {
			hashTable[funcaoHash(nome_produto)].Remove(posicao(nome_produto));
			return true;
		}
		return false;
	}

	~Hash() {
		delete(hashTable);
	}

};
