#include <bits/stdc++.h>

using namespace std;

struct consulta{
    int ini,fim;
};

bool compara(consulta x, consulta y){ //comparar as consultadas escolhendo a que termina primeiro
  return x.fim < y.fim; 
}

int main(){
    int n; cin >> n;

    consulta agenda[n];
    for(int i = 0; i < n; i++)
        cin >> agenda[i].ini >> agenda[i].fim;
    
    sort(agenda,agenda+n,compara);

    int quant = 1;
    consulta atual = agenda[0];
    for(int i = 1; i < n; i++){
        if(agenda[i].ini >= atual.fim){
            atual = agenda[i];
            quant++;
        }
    }

    cout << quant << "\n";
    return 0;
}