#pragma once
#include <iostream>
#include<string>
#include <QFile>
#include <QTextStream>

using namespace std;

//LDE Implementation
//Lista Din�mica Estruturada
//Pensar sempre no caso mais comum

template <typename T>
class InterfaceLista {
public:
	virtual bool insere(T,T) = 0;
	//virtual void print() = 0;
	virtual int busca(T,T) = 0;
	virtual bool remove(int) = 0;
	virtual ~InterfaceLista() {

    }

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
    string* vetor_de_strings;

    void split(string texto) {
        int posicao_delimitador = texto.find(';');
        vetor_de_strings = new string[(texto.length() / posicao_delimitador) + 1];

        int posicao = 0;
        for (int i = 0; i < texto.length(); i++) {
            if (i != posicao_delimitador) {
                vetor_de_strings[posicao].append(1, texto[i]);
            }
            else {
                posicao++;
            }
        }
    }

    void ler_linha(QString linha){
        string cast_linha = linha.toUtf8().constData();

        split(cast_linha);

        this->insere(vetor_de_strings[0], vetor_de_strings[1]);

        delete[] vetor_de_strings;
    }

    void le_arquivo() {
        QFile file(":/QtGuiApplication1/bd.txt");
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
            QTextStream in(&file);
            while(!in.atEnd()){
                  ler_linha(in.readLine());
            }
        }
        else{
           cout << "erro na abertura" << endl;
        }

    }

public:

	~LDE() {
		while (this->remove(0));
		delete primeiro;
	}

	LDE() {
		primeiro = NULL;
		size = 0;
        this->le_arquivo();
	}

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
