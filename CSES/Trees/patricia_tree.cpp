#include <bits/stdc++.h>

using namespace std;

struct No {
    string chave;
    bool folha;
    No* direita;
    No* abaixo;

    // Construtor
    No(const string& chave) : chave(chave), folha(false), direita(nullptr), abaixo(nullptr) {}
};

bool buscar(const No* raiz, const string& chave);
string encontrarPrefixoComum(const string& str1, const string& str2);
void exibir(const No* raiz);
void inserir(No** raiz, const string& chave);
void remover(No** raiz, const string& chave);

int main(){
    // Criar uma árvore Patricia vazia
    No* raiz = nullptr;
    
    // Inserir chaves na árvore
    inserir(&raiz, "banana");
    inserir(&raiz, "bandana");
    inserir(&raiz, "maca");
    inserir(&raiz, "marte");
    inserir(&raiz, "martelo");
    inserir(&raiz, "martelos");
    inserir(&raiz, "laranja");

    exibir(raiz);
    
    // Testar a busca de chaves
    cout << "Busca de chaves:\n";
    cout << "banana: " << (buscar(raiz, "banana") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "bandana: " << (buscar(raiz, "bandana") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "maca: " << (buscar(raiz, "maca") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "marte: " << (buscar(raiz, "marte") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "martelo: " << (buscar(raiz, "martelo") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "martelos: " << (buscar(raiz, "martelos") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "laranja: " << (buscar(raiz, "laranja") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "abacaxi: " << (buscar(raiz, "abacaxi") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "cereja: " << (buscar(raiz, "cereja") ? "Encontrada" : "Nao encontrada") << "\n";

    remover(&raiz,"martelo");
    remover(&raiz,"banana");
    remover(&raiz,"laranja");

    exibir(raiz);

    cout << "Busca de chaves apos remocoes:\n";
    cout << "banana: " << (buscar(raiz, "banana") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "bandana: " << (buscar(raiz, "bandana") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "maca: " << (buscar(raiz, "maca") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "marte: " << (buscar(raiz, "marte") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "martelo: " << (buscar(raiz, "martelo") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "martelos: " << (buscar(raiz, "martelos") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "laranja: " << (buscar(raiz, "laranja") ? "Encontrada" : "Nao encontrada") << "\n";

    return 0;
}

string encontrarPrefixoComum(const string& str1, const string& str2) {
    string prefixo;
    int tamMin = min(str1.length(), str2.length());
    
    for (int i = 0; i < tamMin; ++i) {
        if (str1[i] == str2[i]) {
            prefixo += str1[i];
        } else {
            break;
        }
    }
    
    return prefixo;
}

bool buscar(const No* raiz, const string& chave) {
    if (raiz == nullptr)
        return false;
    
    const No* noAtual = raiz;
    
    while (noAtual != nullptr) {
        if (chave == noAtual->chave) {
            // A chave foi encontrada
            return true;
        }
        
        if (chave.find(noAtual->chave) == 0) {
            // O nó atual é um prefixo da chave, desça para o próximo nível
            noAtual = noAtual->abaixo;
        } else {
            // O nó atual não é um prefixo da chave, vá para o próximo nó à direita
            noAtual = noAtual->direita;
        }
    }
    
    // A chave não foi encontrada
    return false;
}

void inserir(No** raiz, const string& chave) {
    // Caso base: árvore vazia
    if (*raiz == nullptr) {
        *raiz = new No(chave);
        return;
    }
    
    No* noAtual = *raiz;
    
    // Encontrar o nó existente que compartilha o maior prefixo
    while (noAtual != nullptr && !noAtual->folha && chave.find(noAtual->chave) == 0) {
        if (chave == noAtual->chave) {
            // A chave já existe na árvore, não precisa ser inserida novamente
            return;
        }
        
        if (chave.length() > noAtual->chave.length()) {
            noAtual = noAtual->abaixo;
        } else {
            noAtual = noAtual->direita;
        }
    }
    
    // Dividir o nó existente em dois
    string prefixoComum = encontrarPrefixoComum(chave, noAtual->chave);
    string sufixoExistente = noAtual->chave.substr(prefixoComum.length());
    
    No* novoNo = new No(sufixoExistente);
    novoNo->folha = noAtual->folha;
    novoNo->direita = noAtual->direita;
    novoNo->abaixo = noAtual->abaixo;
    
    noAtual->chave = prefixoComum;
    noAtual->folha = false;
    noAtual->direita = novoNo;
    noAtual->abaixo = new No(chave.substr(prefixoComum.length()));
    noAtual->abaixo->folha = true;
}

void remover(No** raiz, const string& chave) {
    if (*raiz == nullptr) {
        // Árvore vazia, não há nada para remover
        return;
    }
    
    No* noAtual = *raiz;
    No* noPai = nullptr;
    No* noRemovido = nullptr;
    No* noSubstituto = nullptr;
    bool encontrou = false;
    
    // Encontrar o nó a ser removido
    while (noAtual != nullptr) {
        if (chave == noAtual->chave) {
            encontrou = true;
            break;
        }
        
        noPai = noAtual;
        
        if (chave.find(noAtual->chave) == 0) {
            noAtual = noAtual->abaixo;
        } else {
            noAtual = noAtual->direita;
        }
    }
    
    if (!encontrou) {
        // A chave não existe na árvore, não há nada para remover
        return;
    }
    
    // Caso 1: O nó a ser removido é uma folha
    if (noAtual->folha) {
        noRemovido = noAtual;
        noSubstituto = nullptr;
    } else {
        // Caso 2: O nó a ser removido não é uma folha
        
        // Encontrar o nó substituto para manter a estrutura da árvore
        No* noAnterior = noAtual;
        noRemovido = noAtual->abaixo;
        
        while (!noRemovido->folha) {
            noAnterior = noRemovido;
            noRemovido = noRemovido->direita;
        }
        
        noSubstituto = noRemovido->abaixo;
        noRemovido->abaixo = nullptr;
        
        // Atualizar a chave do nó a ser removido com a chave do nó substituto
        noAtual->chave = noRemovido->chave;
        
        // Atualizar o nó pai do nó substituto
        if (noAnterior->abaixo == noRemovido) {
            noAnterior->abaixo = noSubstituto;
        } else {
            noAnterior->direita = noSubstituto;
        }
        
        noRemovido = noAtual;
    }
    
    // Remover o nó da memória
    if (noPai == nullptr) {
        // O nó removido era a raiz da árvore
        *raiz = noSubstituto;
    } else if (noPai->abaixo == noRemovido) {
        noPai->abaixo = noSubstituto;
    } else {
        noPai->direita = noSubstituto;
    }
    
    delete noRemovido;
}

void exibir(const No* raiz) {
    if (raiz == nullptr) {
        return;
    }
    
    std::queue<const No*> fila;
    fila.push(raiz);
    
    int nosNesteNivel = 1;
    int nosNoProximoNivel = 0;
    
    while (!fila.empty()) {
        const No* noAtual = fila.front();
        fila.pop();
        
        cout << noAtual->chave << " ";
        
        nosNesteNivel--;
        
        if (noAtual->abaixo != nullptr) {
            fila.push(noAtual->abaixo);
            nosNoProximoNivel++;
        }
        
        if (noAtual->direita != nullptr) {
            noAtual = noAtual->direita;
            
            while (noAtual != nullptr) {
                fila.push(noAtual);
                nosNoProximoNivel++;
                noAtual = noAtual->direita;
            }
        }
        
        if (nosNesteNivel == 0) {
            cout << endl;
            nosNesteNivel = nosNoProximoNivel;
            nosNoProximoNivel = 0;
        }
    }
}