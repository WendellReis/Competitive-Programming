#include <bits/stdc++.h>

using namespace std;

int maximo = 0;

void dfs(int p, vector<vector<int>> adj, vector<int> &tam) {
    int altura = 0;
    for(auto u: adj[p]) {
        if(tam[u] == -1) dfs(u,adj,tam);
        altura = max(altura,1+tam[u]);
    }
    tam[p] = altura;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int s,t,p; cin >> s >> t >> p;

    vector<int> h(s+1);
    vector<int> tam(s+1,-1);
    vector<vector<int>> adj(s+1);
    for(int i = 1; i <= s; i++)
        cin >> h[i];
    
    while(t--) {
        int i,j; cin >> i >> j;
        
        if(h[i] > h[j]) adj[i].push_back(j);
        else if(h[j] > h[i]) adj[j].push_back(i);
    }

    dfs(p,adj,tam);
    cout << tam[p] << "\n";
    return 0;
}