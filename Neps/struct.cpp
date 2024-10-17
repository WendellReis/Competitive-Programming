#include <bits/stdc++.h>

using namespace std;

typedef struct {
    string nome;
    int idade;
    float peso;
} Pessoa;

void imprimir(Pessoa P) {
    cout << "Nome: " << P.nome << endl;
    printf("Idade: %d anos\n",P.idade);
    printf("Nome: %.2f kg\n",P.peso);
}

void alter(Pessoa &P) {
    P.idade+=10;
}

int main() {
    Pessoa p;
    p.nome = "Wendell Reis Milani Matias";
    p.idade = 20;
    p.peso = 55.8;

    imprimir(p);
    alter(p);
    imprimir(p);
    return 0;
}