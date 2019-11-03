#pragma once
#include <iostream>
#include "LDDE.h"
#include "Produto.h"
#include "IHash.h"
#include "LES_v2.h"
using namespace std;
template<typename T>
class Hash : public IHash<T> {
private:
    LDDE<T>* hashTable;
    int tamanho;
    int limite;
    int quantidade_elementos;

    T insercao_mais_recente;

    T sentiela;

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
        quantidade_elementos = 0;
	}

    int get_size(){
        return quantidade_elementos;
    }

    bool Insere(T p) {
        if (Contem(p) || limite >= (tamanho + tamanho * 0.5)) {
			return false;
		}
        hashTable[funcaoHash(p.get_nome_produto())].Insere(p);
        limite++;
        quantidade_elementos++;
		return true;
	}

    T get_insercao_mais_recente(){
        return insercao_mais_recente;
    }

    bool Contem(T p) {
        if (hashTable[funcaoHash(p.get_nome_produto())].Busca(p) != -1) {
            return true;
		}
		return false;
	}

    int posicao(string nome_produto) {
        return hashTable[funcaoHash(nome_produto)].Busca(nome_produto);
	}

    T& Contem(string nome_produto) {
        int posicao_produto = posicao(nome_produto);
        if(posicao_produto != -1){
            return hashTable[funcaoHash(nome_produto)].get_produto(posicao_produto);
        }
        else{
            return this->sentiela;
        }
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
        int posicao_produto = posicao(nome_produto);
        if (posicao_produto != -1) {
            hashTable[funcaoHash(nome_produto)].Remove(posicao_produto);
			return true;
		}
        quantidade_elementos--;
		return false;
	}

    void lista_compras(LES<Produto>*lista_de_compras){
        for (int i = 0; i < tamanho; ++i) {
            hashTable[i].update_lista_compras(lista_de_compras);
        }
    }

	~Hash() {
		delete(hashTable);
	}

};
