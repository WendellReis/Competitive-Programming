#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

int quant = 0;

void bfs(int n, vector<int> *adj, int * visited) {
    visited[n] = 1;
    quant++;
    for(auto u : adj[n])
        if(visited[u] == 0)
            bfs(u,adj,visited);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,d; cin >> n >> d;

    vector<pair<int,int>> c(n);
    for(int i = 0; i < n; i++)
        cin >> c[i].F >> c[i].S;

    vector<int> adj[n];
    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(sqrt(pow(c[i].F - c[j].F,2) + pow(c[i].S - c[j].S,2)) <= d){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }

    int visited[n] = {0};
    bfs(0,adj,visited);
    
    if(quant == n) cout << "S\n";
    else cout << "N\n";
    return 0;
}