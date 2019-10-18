#include <chrono>
#include <iostream>
#include<fstream>
using namespace std;

template <typename T>
class ILista {
public:
	virtual bool Insere(T,T) = 0;
	virtual int Busca(T,T) = 0;
	virtual bool Remove(int) = 0;
	virtual void Imprime() = 0;
	virtual ~ILista() {};
};

// Pré-declarações
template <typename T>
class LDDE;

// Pré-declarações
template <typename T>
ostream& operator<< (ostream& out, const LDDE<T>& a);

// Implementações
template <typename T>
class No {
private:
	string senha;
	string user;
	No<T>* proximo;
	No<T>* anterior;

public:

	No() {};

	No(string senha, string user) {
		this->senha = senha;
		this->user = user;
		proximo = NULL;
		anterior = NULL;
		valor = 0;
	}
	// implementa << no nó

	// LDDE pode ver membros privados
	template <typename>
	friend class LDDE;


	// Operador << do cout com lde pode ver membros privados
};

template <typename T>
class LDDE : public ILista<T> {
private:
	No<T>* primeiro;
	No<T>* ultimo;
	int size;
	T sentinela;

	void fill_me_in(string endereco_arquivo) {
		fstream file;
		string linha;
		string* vetor;
		
		file.open(endereco_arquivo);
		if (file.is_open()) {
			while (file >> linha) {
				vetor = split(linha);
				this->Insere(vetor[0], vetor[1]);
			}
		}
		else {
			cout << "erro na abertura" << endl;
		}
	}


	string* split(string texto) {

		
		int posicao_delimitador = texto.find(';');
		int tamanho_vetor = texto.length() / posicao_delimitador;

		string* novo_vetor = new string[(texto.length() / posicao_delimitador)+1];

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

	// Este operador faz a cópia da lista em caso de atribuições
	LDDE& operator= (const LDDE& other) {
	}

	void Imprime() {
		No<T>* atual = primeiro;
		while (atual) {
			cout << atual->user << " " << atual->senha << endl;
			atual = atual->proximo;
		}
	}
	bool Insere(T user, T senha) {
		bool retorno = false;

		No<T>* novo = new No<T>;

		novo->senha = senha;
		novo->user = user;

		novo->proximo = NULL;
		novo->anterior = NULL;

		No<T>* atual = primeiro;
		No<T>* anterior = NULL;

		while (atual != NULL && atual->user < user) {
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
	};

	int Busca(T user, T senha) {
		No<T>* atual = primeiro;
		int pos = 0;
		while (atual != NULL) {
			if (atual->user == user && atual->senha == senha) {
				return pos;
			}
			atual = atual->proximo;
			pos++;
		}
		return -1;

	};

	bool Remove(int idx) {

		if (idx > size || primeiro == NULL) {
			return false;
		}

		No<T>* atual = NULL;
		No<T>* anterior = NULL;
		atual = primeiro;

		while (atual != NULL && idx--) {
			anterior = atual;
			atual = atual->proximo;
		}
		//nao pode anterior-> prox para pos 0

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

	};
};
