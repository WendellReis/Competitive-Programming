#include <bits/stdc++.h>

using namespace std;

int qtd = 0;

void bfs(int p, vector<int> *adj, vector<int> visited) {
    qtd++;
    visited[p] = 1;

    for(auto u : adj[p])
        if(!visited[u])
            bfs(u,adj,visited);
}

int main() {
    int n,m; cin >> n >> m;

    vector<int> adj[n+1];
    int a,b;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> visited(n+1,0);
    for(int i = 1; i <= n; i++) {
        cin >> a;
        visited[a] = 1;
        
        vector<int> temp = visited;
        for(int j = 1; j <= n; j++)
            if(!temp[j]) {
                bfs(j,adj,temp);
                break;
            }
        cout << qtd << "\n";
        if(qtd == n-i)
            cout << "YES\n";
        else
            cout << "NO\n";
        qtd = 0;
    }
    return 0;
}