#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define F first
#define S second 

using namespace std;

int main(){
    int h,l; cin >> h >> l;
    
    int ladrilhos[h][l];
    REP(i,0,h) REP(j,0,l)
        cin >> ladrilhos[i][j];

    stack<pair<int,int>> pilha; //armazenar as posições dos ladrilhos
    int menor = INT32_MAX;
    REP(i,0,h) REP(j,0,l){
        if(ladrilhos[i][j] != -1){ //Se não tiver sido visitado
            pilha.push(make_pair(i,j));
            int quant = 1, valor = ladrilhos[i][j];
            while(!pilha.empty()){
                pair<int,int> atual = pilha.top();
                ladrilhos[atual.F][atual.S] = -1; //visitando ladrilho atual
                pilha.pop();
                //Se a posição adjacente for válida e igual a posicao atual
                if(atual.F + 1 < h) if(ladrilhos[atual.F + 1][atual.S] == valor){
                    quant++; 
                    ladrilhos[atual.F + 1][atual.S] = - 1; //visitando a posicao adjacente
                    pilha.push(make_pair(atual.F + 1,atual.S)); //adcionando posicao adjacente a pilha
                }

                if(atual.F - 1 >= 0) if(ladrilhos[atual.F - 1][atual.S] == valor){
                    quant++;
                    ladrilhos[atual.F - 1][atual.S] = - 1; 
                    pilha.push(make_pair(atual.F - 1,atual.S));
                }

                if(atual.S + 1 < l) if(ladrilhos[atual.F][atual.S + 1] == valor){
                    quant++;
                    ladrilhos[atual.F][atual.S + 1] = - 1; 
                    pilha.push(make_pair(atual.F,atual.S + 1));
                }

                if(atual.S - 1 >= 0) if(ladrilhos[atual.F][atual.S - 1] == valor){
                    quant++;
                    ladrilhos[atual.F][atual.S - 1] = - 1; 
                    pilha.push(make_pair(atual.F,atual.S - 1));
                }
            }
            menor = min(menor,quant);
        }
    }
    cout << menor << "\n";
    return 0;
}