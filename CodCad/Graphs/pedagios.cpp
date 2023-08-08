#include <bits/stdc++.h>

using namespace std;

int main(){
    int c,e,l,p, t = 1; cin >> c >> e >> l >> p;
    
    while(c && e && l && p){
        int visitados[c+1] = {0};
        vector<int> adj[c+1];

        int v1,v2;
        for(int i = 0; i < e; i++){
            cin >> v1 >> v2;
            adj[v1].push_back(v2);
            adj[v2].push_back(v1);
        }

        int nivel = 1;
        visitados[l] = 1;
        while(nivel <= p+1){
            for(int i = 1; i <= c; i++)
                if(visitados[i] == nivel)
                    for(int j = 0; j < adj[i].size(); j++)
                        if(visitados[adj[i][j]] == 0)
                            visitados[adj[i][j]] = nivel+1;                                                       
            nivel++;
        }
        cout << "Teste " << t << "\n";
        for(int i = 1; i <= c; i++)
            if(visitados[i] > 1 && visitados[i] <= p+1)
                cout << i << " ";
        cout << endl;
        t++;
        cin >> c >> e >> l >> p;
    }
    return 0;
}