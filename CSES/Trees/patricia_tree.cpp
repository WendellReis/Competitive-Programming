#include <bits/stdc++.h>

using namespace std;

typedef struct No
{
    string palavra;
    No *direita;
    No *baixo;
    bool palavraFinal;
} No;

//Verifica se as duas strings possuem o mesmo prefixo
bool iniciaCom(string palavraA, string palavraB);
//Retorna o comprimento da string
int comprimento(string palavra);
//Retorna uma string com o valor concatenado de duas strings
string concatenar(string palavraA, string palavraB);
//Retorna uma sub-string de acordo com os índices fornecidos
string subPalavra(string palavra, int inicio, int fim);
//Remove uma chave da árvore
No* remove(No *no, string palavra, No *anterior, No *ultimo_pai);
//Remove uma chave da árvore
No* remove(No *no, string palavra);
//Busca uma chave na árvore, retorna verdadeiro caso encontre, c.c. retorna falso
bool busca(No *no, string chave);
//Insere uma chave na árvore
No* insere(No *no, string palavra);
//Exibe todos os valores na árvore
void exibir(No *no);
//Exibe os dados de um nó
void exibirNo(No *no);

int main(){

    No *raiz = (No*)calloc(1, sizeof(No));
    raiz->baixo = nullptr;
    raiz->direita = nullptr;

    /*
    raiz = insere(raiz, "carro");
    raiz = insere(raiz, "carroca");
    raiz = insere(raiz, "carroceria");
    raiz = insere(raiz, "carruagem");

    exibir(raiz);
    raiz = remove(raiz, "carro");
    raiz = remove(raiz, "carruagem");
    cout << "--------------------------\n";
    exibir(raiz);
    */
    
    
    raiz = insere(raiz, "banana");
    raiz = insere(raiz, "banca");
    raiz = insere(raiz, "macarrao");
    raiz = insere(raiz, "porto");
    raiz = insere(raiz, "cachorro");
    raiz = insere(raiz, "cadeado");
    raiz = insere(raiz, "castrado");
    raiz = insere(raiz, "coleira");
    raiz = insere(raiz, "bananada");

    exibir(raiz);

    cout << "\n\nBusca de chaves:\n";
    cout << "banana: " << (busca(raiz, "banana") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "banca: " << (busca(raiz, "banca") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "maca: " << (busca(raiz, "maca") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "marte: " << (busca(raiz, "marte") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "martelo: " << (busca(raiz, "martelo") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "cachorro: " << (busca(raiz, "cachorro") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "laranja: " << (busca(raiz, "laranja") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "coleira: " << (busca(raiz, "coleira") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "cereja: " << (busca(raiz, "cereja") ? "Encontrada" : "Nao encontrada") << "\n";    
    cout << "\n";
    
    exibir(raiz);
    cout << "--------------REMOVENDO: banana-------------------\n";
    raiz = remove(raiz, "banana", nullptr, nullptr);
    exibir(raiz);
    cout << "--------------REMOVENDO: bananada-------------------\n";
    raiz = remove(raiz, "bananada", nullptr, nullptr);
    exibir(raiz);
    cout << "--------------REMOVENDO: banca-------------------\n";
    raiz = remove(raiz, "banca", nullptr, nullptr);
    exibir(raiz);
    cout << "--------------INSERINDO: banca-------------------\n";
    raiz = insere(raiz, "banca");
    exibir(raiz);

    cout << "--------------REMOVENDO macarrao-------------------\n";
    raiz = remove(raiz, "macarrao", nullptr, nullptr);
    exibir(raiz);
    
    cout << "--------------REMOVENDO porto-------------------\n";
    raiz = remove(raiz, "porto", nullptr, nullptr);
    exibir(raiz);

    cout << "--------------REMOVENDO cachorro-------------------\n";
    raiz = remove(raiz, "cachorro", nullptr, nullptr);
    exibir(raiz);

    cout << "--------------REMOVENDO cadeado-------------------\n";
    raiz = remove(raiz, "cadeado", nullptr, nullptr);
    exibir(raiz);

    cout << "--------------REMOVENDO castrado-------------------\n";
    raiz = remove(raiz, "castrado", nullptr, nullptr);
    exibir(raiz);

    cout << "--------------REMOVENDO coleira-------------------\n";
    raiz = remove(raiz, "coleira", nullptr, nullptr);
    exibir(raiz);

    cout << "--------------REMOVENDO banca-------------------\n";
    raiz = remove(raiz, "banca", nullptr, nullptr);
    exibir(raiz);

    cout << "\n\nBusca de chaves:\n";
    cout << "banana: " << (busca(raiz, "banana") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "banca: " << (busca(raiz, "banca") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "maca: " << (busca(raiz, "maca") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "marte: " << (busca(raiz, "marte") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "martelo: " << (busca(raiz, "martelo") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "cachorro: " << (busca(raiz, "cachorro") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "laranja: " << (busca(raiz, "laranja") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "bananacao: " << (busca(raiz, "bananacao") ? "Encontrada" : "Nao encontrada") << "\n";
    cout << "cereja: " << (busca(raiz, "cereja") ? "Encontrada" : "Nao encontrada") << "\n";    
    cout << "\n";
    
    free(raiz);
    raiz = nullptr;
    
    return 0;
}


bool iniciaCom(string palavraA, string palavraB)
{
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

string concatenar(string palavraA, string palavraB)
{
    return palavraA.append(palavraB);
}

int comprimento(string palavra)
{
    return palavra.length();
}

bool busca(No *no, string chave) {
    if(no == nullptr)
        return false;
    int compBusca, compBuscaNo;
    compBusca = chave.size();
    compBuscaNo = no->palavra.size();
    if(compBusca < compBuscaNo) {
        if(chave[0] > no->palavra[0]) {
            if(no->direita != nullptr) {
                return busca(no->direita, chave);
            }
        }
        return false;
    }

    string subChave = subPalavra(chave, 0, compBuscaNo-1);

    if(subChave[0] > no->palavra[0]) {
        if(no->direita != nullptr) {
            return busca(no->direita, chave);
        } else {
            return false;
        }
    }

    if(subChave.compare(no->palavra) == 0) {
        if(compBusca == compBuscaNo) {
            return no->palavraFinal;
        } else if(no->baixo != nullptr) {
            string subp = subPalavra(chave, compBuscaNo, compBusca-1);
            return busca(no->baixo, subp);
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

No* insere(No *no, string palavra){
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
                    no->direita = insere(no->direita, palavra);
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
            no->baixo = insere(novo, subPalavra(palavra,i,compPalavra-1));
            
        }
        return no;
    }

    if(compPalavra == compPalavraNo) // Achou a palavra, apenas coloca ela como palavra final
        no->palavraFinal = true;
    else {
        if(i == compPalavraNo) { // Possui todas as letras iguais da chave mas é uma palavra maior
            if(no->baixo != nullptr) {// Possui filhos, comparar com os filhos
                no->baixo = insere(no->baixo,subPalavra(palavra,i,compPalavra-1));
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

No* remove(No *no, string palavra) {
    return remove(no, palavra, nullptr, nullptr);
}

No* remove(No *no, string palavra, No *anterior, No *ultimo_pai)
{
    if (palavra[0] == no->palavra[0]) // Possui a primeira letra igual
    {
        if (comprimento(palavra) > comprimento(no->palavra)) // Palavra maior do que a chave no nó
        {            
            if (no->baixo != nullptr) { // Caso tenha filhos, procurar o restante da palvra nos filhos
                palavra = subPalavra(palavra, comprimento(no->palavra), comprimento(palavra)-1);
                no = remove(no->baixo, palavra, nullptr, no);
            }           
        }
        else if (palavra == no->palavra && no->palavraFinal) // Palavra igual a chave do nó e é uma palavra final
        {
            if (ultimo_pai == nullptr) // Não possui pai
            {
                if (no->baixo == nullptr) { // Não possui filhos
                    free(no);
                    no = no->direita; // O nó vira quem está a direita ( nulo ou o restante da fila)
                }
                else // Nó possui filhos
                {
                    if (no->baixo->direita != nullptr) // Mais de um filho
                        no->palavraFinal = false;
                    else
                    { // Apenas um filho, deve-se concatenar as chaves
                        no->palavra = concatenar(no->palavra, no->baixo->palavra);
                        no->palavraFinal = no->baixo->palavraFinal;
                        if(no->baixo != nullptr)
                            free(no->baixo);
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
                        if(ultimo_pai->baixo != nullptr)
                            free(ultimo_pai->baixo);
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
                        no->palavraFinal = no->baixo->palavraFinal;
                        if(no->baixo != nullptr)
                            free(no->baixo);
                        no->baixo = no->baixo->baixo;
                    }
                }
            }
            else if (anterior->direita == no)
            { // Está à direita de algum nó
                if (no->baixo == nullptr)
                { // Não possui filhos
                    //Basta remover
                    free(no);
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
                        free(no->baixo);
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
        no->direita = remove(no->direita, palavra, no, ultimo_pai);
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

void exibirNo(No *no) {
    if(no != nullptr) {
        cout << "Baixo: " << no->baixo << endl;
        cout << "Palavra: " << no->palavra << endl;
        cout << "PalavraFinal: " << no->palavraFinal << endl;
        cout << "Direita: " << no->direita << endl;
    }
}
