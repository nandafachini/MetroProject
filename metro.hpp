#include <iostream>

using namespace std;

// AUTORES DO PROJETO METRÔ
// Rafa o lógico
// Maria a idealizadora
// Luth o criativo

class Trilho {
public:
    int estacao;
    Trilho *proximo;

    Trilho(int estacao) {
        this->estacao = estacao;
        this->proximo = nullptr;
    }
};

class Linha {
private:
    Trilho* primeiraEstacao;
    Trilho* ultimaEstacao;

public:
    Linha() {
        this->primeiraEstacao = nullptr;
        this->ultimaEstacao = nullptr;
    }

    void mostrarEstacoes(){
        cout << "\nImprimindo todas as estações...\n";
        Trilho* aux = this->primeiraEstacao;
        if (aux == nullptr) {
            cout << "Ops, sem-mão de obra para construir a estação" <<"\n";  
        } else {
            while( aux != nullptr) {
                cout << "Sua linha tem a estação " <<  aux->estacao << "\n";
                aux = aux->proximo;
            } 
        }
    }

    void inserirInicio(int estacao) {
        cout << "\nContruindo a nova a estação no começo...\n";
        Trilho* novaEstacao = new Trilho(estacao);
        if (this->primeiraEstacao == nullptr) {
            this->primeiraEstacao = novaEstacao;
            this->ultimaEstacao = novaEstacao;
        } else {
            this->primeiraEstacao->proximo = this->primeiraEstacao;
            this->primeiraEstacao = novaEstacao;
        }
    }

    void InserirFinal(int estacao) {
        cout << "\nContruindo a nova a estação no começo...\n";
        Trilho* novaEstacao = new Trilho(estacao);
        if (this->ultimaEstacao == nullptr) {
            this->ultimaEstacao = novaEstacao;
            this->primeiraEstacao = novaEstacao;
        } else {
            this->ultimaEstacao->proximo = novaEstacao;
            novaEstacao->proximo = nullptr;
        }
    }

    void removerInicio() {
        cout << "\nDestruindo a primeira estação...\n";
        if (this->primeiraEstacao != nullptr) {
            this->primeiraEstacao = this->primeiraEstacao->proximo;
        }
    }
    
    void removerFinal() {
        cout << "\nDestruindo a ultima estação...\n";
        if (this->ultimaEstacao != nullptr) {
            this->ultimaEstacao->proximo = nullptr;
            this->ultimaEstacao = this->ultimaEstacao->proximo;
        } else {
            this->ultimaEstacao->proximo = nullptr;
            this->ultimaEstacao = this->ultimaEstacao->proximo;
        }
    }

};

