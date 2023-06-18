#include <bits/stdc++.h>

using namespace std;

typedef struct No{
    string palavra;
    No *direita;
    No *baixo;
    bool palavraFinal;
} No;

bool iniciaCom(string palavraA, string palavraB);
int comprimento(string palavra);
string concatenar(string palavraA, string palavraB);
string subPalavra(string palavra, int inicio, int fim);
No* remover(No *no, string palavra, No *anterior, No *ultimo_pai);
bool buscar(No *no, string chave);
No* inserir(No *no, string palavra);
void exibir(No *no);
void exibirNo(No *no);

int main(){

    No *raiz = (No*)calloc(1, sizeof(No));
    raiz->baixo = nullptr;
    raiz->direita = nullptr;
    raiz = inserir(raiz, "banana");
    raiz = inserir(raiz, "banca");
    raiz = inserir(raiz, "macarrao");
    raiz = inserir(raiz, "porto");
    raiz = inserir(raiz, "cachorro");
    raiz = inserir(raiz, "ban");
    raiz = inserir(raiz, "cadeado");
    raiz = inserir(raiz, "castrado");
    raiz = inserir(raiz, "coleira");
    raiz = inserir(raiz, "bananada");
    raiz = inserir(raiz, "bananacao");

    exibir(raiz);

    cout << "\n\nBusca de chaves:\n";
    cout << "banana: " << (buscar(raiz, "banana") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "banca: " << (buscar(raiz, "banca") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "maca: " << (buscar(raiz, "maca") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "marte: " << (buscar(raiz, "marte") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "martelo: " << (buscar(raiz, "martelo") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "cachorro: " << (buscar(raiz, "cachorro") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "laranja: " << (buscar(raiz, "laranja") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "bananacao: " << (buscar(raiz, "bananacao") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "cereja: " << (buscar(raiz, "cereja") ? "Encontrada" : "Nao encontrada") << "\n";    
    cout << "\n";
    
    exibir(raiz);
    cout << "--------------REMOVENDO: ban-------------------\n";
    raiz = remover(raiz, "ban", nullptr, nullptr);
    exibir(raiz);
    cout << "--------------REMOVENDO: banana-------------------\n";
    raiz = remover(raiz, "banana", nullptr, nullptr);
    exibir(raiz);
    cout << "--------------REMOVENDO: bananada-------------------\n";
    raiz = remover(raiz, "bananada", nullptr, nullptr);
    exibir(raiz);
    cout << "--------------REMOVENDO: banca-------------------\n";
    raiz = remover(raiz, "banca", nullptr, nullptr);
    exibir(raiz);
    cout << "--------------INSERINDO: banca-------------------\n";
    raiz = inserir(raiz, "banca");
    exibir(raiz);
    cout << "--------------REMOVENDO: bananacao-------------------\n";
    raiz = remover(raiz, "bananacao", nullptr, nullptr);
    exibir(raiz);

    cout << "--------------REMOVENDO macarrao-------------------\n";
    raiz = remover(raiz, "macarrao", nullptr, nullptr);
    exibir(raiz);
    
    cout << "--------------REMOVENDO porto-------------------\n";
    raiz = remover(raiz, "porto", nullptr, nullptr);
    exibir(raiz);

    cout << "--------------REMOVENDO cachorro-------------------\n";
    raiz = remover(raiz, "cachorro", nullptr, nullptr);
    exibir(raiz);

    cout << "--------------REMOVENDO ban-------------------\n";
    raiz = remover(raiz, "ban", nullptr, nullptr);
    exibir(raiz);

    cout << "--------------REMOVENDO cadeado-------------------\n";
    raiz = remover(raiz, "cadeado", nullptr, nullptr);
    exibir(raiz);

    cout << "--------------REMOVENDO castrado-------------------\n";
    raiz = remover(raiz, "castrado", nullptr, nullptr);
    exibir(raiz);

    cout << "--------------REMOVENDO coleira-------------------\n";
    raiz = remover(raiz, "coleira", nullptr, nullptr);
    exibir(raiz);

    cout << "--------------REMOVENDO banca-------------------\n";
    raiz = remover(raiz, "banca", nullptr, nullptr);
    exibir(raiz);

    cout << "\n\nBusca de chaves:\n";
    cout << "banana: " << (buscar(raiz, "banana") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "banca: " << (buscar(raiz, "banca") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "maca: " << (buscar(raiz, "maca") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "marte: " << (buscar(raiz, "marte") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "martelo: " << (buscar(raiz, "martelo") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "cachorro: " << (buscar(raiz, "cachorro") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "laranja: " << (buscar(raiz, "laranja") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "bananacao: " << (buscar(raiz, "bananacao") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "cereja: " << (buscar(raiz, "cereja") ? "Encontrada" : "Nao encontrada") << "\n";    
    cout << "\n";
    
    return 0;
}


bool iniciaCom(string palavraA, string palavraB){
    int tamanhoA = comprimento(palavraA), tamanhoB = comprimento(palavraB);
    if (tamanhoB > tamanhoA)
        return false;

    int i = 0;
    while (i < tamanhoB)
    {
        if (palavraA[i] != palavraB[i])
            return false;
        i++;
    }
    return true;
}

string concatenar(string palavraA, string palavraB){
    return palavraA.append(palavraB);
}

int comprimento(string palavra){
    return palavra.length();
}

bool buscar(No *no, string chave) {
    if(no == nullptr)
        return false;
    int compBusca, compBuscaNo;
    compBusca = chave.size();
    compBuscaNo = no->palavra.size();
    if(compBusca < compBuscaNo) {
        if(chave[0] > no->palavra[0]) {
            if(no->direita != nullptr) {
                return buscar(no->direita, chave);
            }
        }
        return false;
    }

    string subChave = subPalavra(chave, 0, compBuscaNo-1);

    if(subChave[0] > no->palavra[0]) {
        if(no->direita != nullptr) {
            return buscar(no->direita, chave);
        } else {
            return false;
        }
    }

    if(subChave.compare(no->palavra) == 0) {
        if(compBusca == compBuscaNo) {
            return no->palavraFinal;
        } else if(no->baixo != nullptr) {
            string subp = subPalavra(chave, compBuscaNo, compBusca-1);
            return buscar(no->baixo, subp);
        }
    }    
    return false;
}

string subPalavra(string palavra, int inicio, int fim){
    string subString = "";
    for (int i = inicio; i <= fim; i++)
        subString+=palavra[i];
    return subString;
}

No* inserir(No *no, string palavra){
    int i = 0;
    int compPalavra = palavra.size();
    int compPalavraNo = no->palavra.size();

    if(compPalavraNo == 0) { // Raiz nula, inserir na raiz.
        no->palavra = palavra;
        no->palavraFinal = true;
        return no;
    }

    while(i < compPalavra && i < compPalavraNo && no->palavra[i] == palavra[i]) 
        i++; // Vai até o índice em que as palavras possuem as mesmas letras.
    
    if(i < compPalavraNo && i < compPalavra) { // verifica se o índice é valido
        if(i == 0) { // Não há letras em comum
            if(palavra[0] > no->palavra[0]) { // A palavra deve ser inserida à direita
                if(no->direita != nullptr) { // Há alguem à direita, tentar inserir à direita dele
                    no->direita = inserir(no->direita, palavra);
                }
                else { // Nó à direita NULO
                    //cout << palavra << " DIREITA NULO\n" << endl;
                    no->direita = (No*)calloc(1, sizeof(No));
                    no->direita->palavraFinal = true;
                    no->direita->palavra = palavra;
                    no->direita->direita = nullptr;
                    no->direita->baixo = nullptr;
                }
            } else { // A palavra deve ser inserida à esquerda
                //cout << palavra << " ESQUERDA\n";
                No *novo = (No*)calloc(1, sizeof(No));
                novo->baixo = nullptr;
                novo->direita = nullptr;
                novo->direita = no;
                novo->palavra = palavra;
                novo->palavraFinal = true;
                return novo;
            }
        } else { // Possui caracteres em comum mas a palavra a ser inserida é maior
            string primeira_parte = subPalavra(no->palavra,0,i-1);
            string segunda_parte = subPalavra(no->palavra,i,compPalavraNo-1);
            // Separa a parte em comum e a segunda parte

            // Regorganiza a primeira parte, abrindo espaço para um novo filho;
            No *novo = (No*)calloc(1, sizeof(No));
            // Segunda parte da chave deve manter os filhos originais do nó
            novo->palavra = segunda_parte;
            novo->direita = nullptr;

            // Troca dos filhos ( referencia )
            novo->baixo = no->baixo; // Segudna parte mantém os filhos originais

            no->palavra = primeira_parte; 

            if(no->palavraFinal == true) {
                no->palavraFinal = false;
                novo->palavraFinal = true;
            }

            //exibir(no); // Verificando a quebra
            //No->baixo vai receber o novo filho
            no->baixo = inserir(novo, subPalavra(palavra,i,compPalavra-1));
            
        }
        return no;
    }

    if(compPalavra == compPalavraNo) // Achou a palavra, apenas coloca ela como palavra final
        no->palavraFinal = true;
    else {
        if(i == compPalavraNo) { // Possui todas as letras iguais da chave mas é uma palavra maior
            if(no->baixo != nullptr) {// Possui filhos, comparar com os filhos
                no->baixo = inserir(no->baixo,subPalavra(palavra,i,compPalavra-1));
            }
            else { // Não possui filhos, inserir no filho do nó
                No *novo = (No*)calloc(1, sizeof(No));
                novo->baixo = nullptr;
                novo->direita = nullptr;
                novo->palavraFinal = true;
                string subp = subPalavra(palavra,i,compPalavra-1);
                novo->palavra = subp;
                no->baixo = novo;
            }
        } else { // Possui letras iguais a da chave mas a palavra é MENOR
            No *novo = (No*)calloc(1, sizeof(No));
            string subp = subPalavra(no->palavra,i,compPalavraNo-1);
            novo->palavra = subp;
            novo->baixo = no->baixo;
            no->baixo = novo;

            no->palavra = palavra;
            no->palavraFinal = true;
            novo->palavraFinal = true;
        }
        return no;
    }
    return no;
}

No* remover(No *no, string palavra, No *anterior, No *ultimo_pai){
    if (palavra[0] == no->palavra[0]) // Possui a primeira letra igual
    {
        if (comprimento(palavra) > comprimento(no->palavra)) // Palavra maior do que a chave no nó
        {            
            if (no->baixo != nullptr) { // Caso tenha filhos, procurar o restante da palvra nos filhos
                palavra = subPalavra(palavra, comprimento(no->palavra), comprimento(palavra)-1);
                no = remover(no->baixo, palavra, nullptr, no); // nullptr ou nó?
            }           
        }
        else if (palavra == no->palavra && no->palavraFinal) // Palavra igual a chave do nó e é uma palavra final
        {
            if (ultimo_pai == nullptr) // Não possui pai
            {
                if (no->baixo == nullptr) { // Não possui filhos
                    no = no->direita; // O nó vira quem está a direita ( nulo ou o restante da fila)
                }
                else // Nó possui filhos
                {
                    if (no->baixo->direita != nullptr) // Mais de um filho
                        no->palavraFinal = false;
                    else
                    { // Apenas um filho, deve-se concatenar as chaves
                        no->palavra = concatenar(no->palavra, no->baixo->palavra);
                        no->baixo = no->baixo->baixo;
                    }
                }
            }
            else if (ultimo_pai->baixo == no)
            {
                //Possui pai
                if (no->baixo == nullptr)
                {
                    //Não possui filhos
                    ultimo_pai->baixo = no->direita;
                    if (no->direita != nullptr && no->direita->direita == nullptr && !ultimo_pai->palavraFinal)
                    {
                        // dois filhos e irá remover algum deles, logo caso o pai não seja uma palavra irá concatenar
                        ultimo_pai->palavra = concatenar(ultimo_pai->palavra, no->direita->palavra);
                        ultimo_pai->palavraFinal = true;
                        ultimo_pai->baixo = nullptr;
                        return ultimo_pai;
                    }
                }
                else
                {   // Possui filhos
                    if (no->baixo->direita != nullptr) // Mais de um filho
                        no->palavraFinal = false; // apenas remove
                    else if (no->baixo != nullptr && no->baixo->direita == nullptr)
                    {
                        no->palavra = concatenar(no->palavra, no->baixo->palavra);
                        no->baixo = no->baixo->baixo;
                    }
                }
            }
            else if (anterior->direita == no)
            { // Está à direita de algum nó
                if (no->baixo == nullptr)
                { // Não possui filhos
                    //Basta remover
                    anterior->direita = no->direita;
                    if(ultimo_pai->baixo == anterior && anterior->direita == nullptr && !ultimo_pai->palavraFinal) {
                        ultimo_pai->baixo = anterior->baixo;
                        ultimo_pai->palavra = concatenar(ultimo_pai->palavra, anterior->palavra);
                        ultimo_pai->palavraFinal = anterior->palavraFinal;
                    }
                }
                else
                {
                    //Possui filhos
                    if (no->baixo->direita == nullptr)
                    {
                        //Apenas um filho, junta as chaves e referencia ao filho do baixo
                        no->palavra = concatenar(no->palavra, no->baixo->palavra);
                        no->baixo = no->baixo->baixo;
                    }
                    else
                    {
                        //Mais de um filho, logo não pode desaparecer
                        no->palavraFinal = false;
                    }
                }
            }
        }
    }

    else if (no->direita != NULL && palavra[0] > no->palavra[0]) // Não possui a primeira letra igual, e é maior, ir para o nó à direita
        no->direita = remover(no->direita, palavra, no, ultimo_pai);
    return (ultimo_pai == nullptr ? no : ultimo_pai);
}

void exibir(No *no) {
    if(no == nullptr)
        return;

    queue<const No*> fila;
    fila.push(no);
    while(!fila.empty()) {
        const No *atual = fila.front(); fila.pop();

        while(atual != nullptr) {
            if(atual->baixo != nullptr) {
                fila.push(atual->baixo);
            }
            cout << atual->palavra << (atual->palavraFinal ? "+" : "-") << " | ";
            atual = atual->direita;
        }  
        cout << "\n";      
    }

}

void exibirNo(No *no){
    if(no != nullptr) {
        cout << "Baixo: " << no->baixo << endl;
        cout << "Palavra: " << no->palavra << endl;
        cout << "PalavraFinal: " << no->palavraFinal << endl;
        cout << "Direita: " << no->direita << endl;
    }
}