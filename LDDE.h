#pragma once
#include <chrono>
#include <iostream>
#include<string>
#include "Produto.h"
#include "ILista.h"
using namespace std;




template <typename T>
class LDDE;


template <typename T>
class NoLDDE {
private:
    T produto;
	NoLDDE<T>* proximo;
	NoLDDE<T>* anterior;

public:

	NoLDDE() {
		proximo = NULL;
		anterior = NULL;
	}

	// LDDE pode ver membros privados
	template <typename>
	friend class LDDE;
};

template <typename T>
class LDDE : public ILista<T> {
private:
	NoLDDE<T>* primeiro;
	NoLDDE<T>* ultimo;
	int size;
	T sentinela;

public:
	LDDE() {
		primeiro = NULL;
		ultimo = NULL;
		size = 0;
	}

	~LDDE() {
		while (this->Remove(0));
	}

	// Deixe para o fim (deve copiar as listas)
	LDDE(const LDDE& outra) {
	}

	int get_size() {
		return size;
	}

	LDDE& operator= (const LDDE& other) {
	}

	bool Insere(T p) {
		bool retorno = false;

		NoLDDE<T>* novo = new NoLDDE<T>;

		novo->produto = p;

		novo->proximo = NULL;
		novo->anterior = NULL;

		NoLDDE<T>* atual = primeiro;
		NoLDDE<T>* anterior = NULL;

		while (atual != NULL && atual->produto.get_nome_produto() < p.get_nome_produto()) {
			anterior = atual;
			atual = atual->proximo;
		}

		if (anterior) {
			anterior->proximo = novo;
		}
		else {
			primeiro = novo;
		}

		if (atual) {
			atual->anterior = novo;
		}
		else {
			ultimo = novo;
		}

		novo->anterior = anterior;
		novo->proximo = atual;

		size++;
		return retorno;
    }

    int Busca(T valor) {
		NoLDDE<T>* atual = primeiro;
		int pos = 0;
		while (atual != NULL) {
            if (atual->produto.get_nome_produto() == valor.get_nome_produto()) {
				return pos;
			}
			atual = atual->proximo;
			pos++;
		}
		return -1;
    }

    int Busca(string valor) {
        NoLDDE<T>* atual = primeiro;
        int pos = 0;
        while (atual != NULL) {
            if (atual->produto.get_nome_produto() == valor) {
                return pos;
            }
            atual = atual->proximo;
            pos++;
        }
        return -1;
    }
	
    T& get_produto(int pos) {
		NoLDDE<T>* atual = primeiro;
		while (atual != NULL && pos--) {
			atual = atual->proximo;
		}
		if (atual) {
			return atual->produto;
        }
        sentinela.set_nome_produto("vazio");
        return sentinela;
	}

	bool Remove(int idx) {

		if (idx > size || primeiro == NULL) {
			return false;
		}

		NoLDDE<T>* atual = NULL;
		NoLDDE<T>* anterior = NULL;
		atual = primeiro;

		while (atual != NULL && idx--) {
			anterior = atual;
			atual = atual->proximo;
		}

		if (anterior) {
			anterior->proximo = atual->proximo;
		}
		else {
			primeiro = atual->proximo;
		}

		if (atual->proximo) {
			atual->proximo->anterior = anterior;
		}
		else {
			ultimo = anterior;
		}



		delete atual;
		size--;
		return true;

    }

	string *Imprime() {
		NoLDDE<T>* atual = primeiro;
		string* produtos = new string[this->size];
		int pos = 0;
		while (atual != NULL) {
			produtos[pos] = atual->produto.Imprime();
			atual = atual->proximo;
			pos++;

		}

		return produtos;
	};


};
