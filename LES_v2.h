#pragma once
#include <iostream>

template <typename T>
class LES{
private:
    int tamanhoDaLista;
    int quantidadeDeElementos;
    T *vetor;
    T sentinela;


public:
    LES(int tamanhoDaLista){
        this->tamanhoDaLista = tamanhoDaLista;
        this->quantidadeDeElementos = 0;
        this->vetor = new T[tamanhoDaLista];
    }

    ~LES(){
        delete[] this->vetor;
    }

    int busca(T itemBuscado){
        int i;
        for (i = 0; i < quantidadeDeElementos && vetor[i] < itemBuscado; ++i);
        return i;
    }


    std::string print(){
        std::string produtos;
        for (int i = 0; i < quantidadeDeElementos; ++i) {
            produtos.append(vetor[i].Imprime());
        }

        return produtos;
    }

    const T&operator[](int idx){
        if(idx > quantidadeDeElementos || idx < 0){
            return sentinela;
        }
        return vetor[idx];
    }

    bool remove(int x){
        if(quantidadeDeElementos == tamanhoDaLista){
            return false;
        }
        //int i = busca(x);
        for (int j = x; j < quantidadeDeElementos ; ++j) {
            vetor[j] = vetor[j+1];
        }
        quantidadeDeElementos--;
        return true;
    }


    bool insere(T x){
        if(quantidadeDeElementos == tamanhoDaLista){
            return false;
        }
        int i = busca(x);
        for (int j = quantidadeDeElementos; j > i ; --j) {
            vetor[j] = vetor[j-1];
        }
        vetor[i] = x;
        quantidadeDeElementos++;
        return true;
    }

};
