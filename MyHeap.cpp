#include <iostream>

using namespace std;

template <typename T, int MaxHeap>
class Heap{
private:
    int Nelementos;
    T v[MaxHeap];

    int pai(int i){
        return (i-1)/2;
    };
    int esq(int i){
        return 2*i+1;
    };
    int dir(int i){
        return 2*i+2;
    };
    int menorPai(){
        return pai(Nelementos - 1);
    };

    void sift(int idx){
        int e = esq(idx);
        int d = dir(idx);
        int m = menorPai();

        if(e < MaxHeap && v[e]< v[idx]){
            m = e;
        }
        if(d < MaxHeap && v[d]< v[m]){
            m = d;
        }
        if (m != idx){
            T a = v[idx];
            T b = v[m];
            T temp;

            temp = a;
            a = b;
            b = temp;

            sift(m);
        }
    }

    void doubleCheckSift(){
      T n = Nelementos - 1;
      while(n != 0 && v[pai(n)] > v[n]){
            int a = v[n];
            int b = v[pai(n)];
            int temp;

            temp = a;
            a = b;
            b = temp;

            n = pai(n);
        }
    }

public:

    Heap(){
        Nelementos = 0;
    }

    Heap(T v[], int num){
        for(int i = 0; i < num ; i++){
            this->fila[i] = v[i];
        }
        this->Nelementos = Nelementos;

        for(int i = menorPai(); i>= 0; i--){
            sift(i);
        }
    }

    void insere(T termo){
      if(Nelementos > MaxHeap){
          cout << "Nao eh possivel adicionar mais valores ao Heap" << endl;
      }

      int n = Nelementos++;
      v[n] = termo;
      
        cout << "termo: " << v[n] << endl;
        
    }

    void remove(int idx){
        if(Nelementos == 0){
            cout << "impossivel remover" << endl;
        }

        doubleCheckSift();

        T temp = v[0];
        v[0] = v[idx];
        Nelementos--;
        sift(idx);
        
    }
};

int main(int argc, char** argv) {
    Heap<int, 6>h;
    h.insere(5);
    h.insere(8);
    h.insere(1);
    h.insere(2);
    h.insere(9);

    h.remove(1);
}
