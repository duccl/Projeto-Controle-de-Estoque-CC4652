#pragma once
#include <string>
using namespace std;


class Produto {
private:
	string nome_produto;
	int quantidade_atual;
	int tamanho;
	int quantidade_minima;
	double preco;

	
public:


	bool operator !=(Produto& p) {
		return this->nome_produto != p.nome_produto ? true : false;
	}

	Produto() {
		nome_produto = "vazio";
	};

	Produto(string nome, int quantidade_atual,int tamanho,int quantidade_minima,double preco) {
		this->quantidade_atual = quantidade_atual;
		this->quantidade_minima = quantidade_minima;
		nome_produto = nome;
		this->tamanho = tamanho;
		this->preco = preco;
	}

	string get_nome_produto() {
		return nome_produto;
	}

	Produto& operator =(Produto& p) {
		if (this == &p) {
			return *this;
		}
		nome_produto = p.nome_produto;
		quantidade_atual = p.quantidade_atual;
		quantidade_minima = p.quantidade_minima;
		tamanho = p.tamanho;
		preco = p.preco;
		return *this;
	}

	int get_tamanho() {
		return tamanho;
	}

	void set_nome_produto(string str) {
		nome_produto = str;
	}

	void set_quantidade_atual(int qtd) {
		if (quantidade_atual + qtd < 0) {
			quantidade_atual = 0;
		}
		else {
			quantidade_atual += qtd;
		}
	}

	bool empty() {
		return nome_produto == "vazio" ? true : false;
	}

	int get_quantidade_atual() {
		return quantidade_atual;
	}

	int get_quantidade_minima() {
		return quantidade_minima;
	}

	double getPreco() {
		return preco;
	}

	string Imprime() {
		return ("Nome do Produto: " + get_nome_produto() + "\n" +
			"Quantidade Atual: " + to_string(get_quantidade_atual()) + "\n"
			+"Preco: " + to_string(preco) + "\n" +
			"Tamanho " + to_string(get_tamanho()) + 
			"\n----------------------------\n");
	}
};