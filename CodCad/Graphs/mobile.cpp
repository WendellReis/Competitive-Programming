#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    int pai,a,b;
    vector<int> adj[n+1];
    for(int i = 0; i < n; i++){
        cin >> a >> b;

        if(b == 0)
            pai = a;
        else
            adj[b].push_back(a);
    }

    //Armazenando as pecas por nivel num vector
    vector<int> pecas;
    queue<int> fila;
    fila.push(pai);
    while(!fila.empty()){
        int atual = fila.front();
        fila.pop();

        for(auto v : adj[atual]){
            fila.push(v);
            pecas.push_back(v);
        }
    }

    vector<int> tamanho(n+1, 0);
    for(int i = pecas.size()-1; i > 0; i--){
        if(adj[pecas[i]].size() == 0)
            tamanho[pecas[i]] = 1;
        else{
            int tam = tamanho[adj[pecas[i]][0]];
            for(auto v : adj[pecas[i]]){
                if(tamanho[v] != tam){
                    cout << "mal\n";
                    return 0;
                }
            }
            tamanho[pecas[i]] = 1 + tam*adj[pecas[i]].size();
        }
    }
    
    cout << "bem\n";
    return 0;
}