#pragma once
#include <iostream>
#include<string>
#include <fstream>
using namespace std;

//LDE Implementation
//Lista Dinâmica Estruturada
//Pensar sempre no caso mais comum

template <typename T>
class InterfaceLista {
public:
	virtual bool insere(T,T) = 0;
	//virtual void print() = 0;
	virtual int busca(T,T) = 0;
	virtual bool remove(int) = 0;
	virtual ~InterfaceLista() {

	};

};

template <typename T>
class LDE;

template <typename T>
class No {
private:
	T senha, user;
	No<T>* prox;
	friend class LDE<T>;
};

template <typename T>
class LDE : InterfaceLista<T> {
private:
	No<T>* primeiro;
	int size;

	void fill_me_in(string endereco_arquivo) {
		fstream file;
		string linha;
		string* vetor;

		file.open(endereco_arquivo);
		if (file.is_open()) {
			while (file >> linha) {
				vetor = split(linha);
				this->insere(vetor[0], vetor[1]);
			}
		}
		else {
			cout << "erro na abertura" << endl;
		}
	}


	string* split(string texto) {


		int posicao_delimitador = texto.find(';');
		int tamanho_vetor = texto.length() / posicao_delimitador;

		string* novo_vetor = new string[(texto.length() / posicao_delimitador) + 1];

		int posicao = 0;
		for (int i = 0; i < texto.length(); i++) {
			if (i != posicao_delimitador) {
				novo_vetor[posicao].append(1, texto[i]);
			}
			else {
				posicao++;
			}
		}
		return novo_vetor;
	}

public:

	void get_fill(string endereco_arquivo) {
		fill_me_in(endereco_arquivo);
	}

	~LDE() {
		while (this->remove(0));
		delete primeiro;
	}

	LDE() {
		primeiro = NULL;
		size = 0;
	}

	/*void print() {
		No<T>* atual = primeiro;
		cout << "LDE: ";
		while (atual != NULL) {
			cout << atual->valor << " ";
			atual = atual->prox;
		}
		cout << endl;
	}*/

	bool remove(int idx) {
		if (idx > size || primeiro == NULL) {
			return false;
		}

		No<T>* atual = NULL;
		No<T>* anterior = NULL;
		atual = primeiro;

		while (atual != NULL && idx--) {
			anterior = atual;
			atual = atual->prox;
		}
		//nao pode anterior-> prox para pos 0

		if (anterior) {
			anterior->prox = atual->prox;
		}
		else {
			primeiro = atual->prox;
		}

		delete atual;
		size--;
		return true;
	}

	bool insere(T user,T senha) {

		bool retorno = false;
		No<T>* novo = new No<T>;
		novo->user = user;
		novo->senha = senha;
		novo->prox = NULL;

		No<T>* atual = primeiro;
		No<T>* anterior = NULL;
		while (atual != NULL && atual->user < user) {
			anterior = atual;
			atual = atual->prox;
		}

		if (anterior == NULL) {
			primeiro = novo;
			retorno = true;
		}
		else {
			anterior->prox = novo;
			retorno = true;
		}

		novo->prox = atual;

		size++;
		return retorno;

	}

	int busca(T user,T senha) {
		No<T>* atual = primeiro;
		int pos = 0;
		while (atual != NULL) {
			if (atual->user == user && atual->senha == senha) {
				return pos;
			}
			atual = atual->prox;
			pos++;
		}
		return -1;
	}
};