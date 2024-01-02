#include <bits/stdc++.h>

using namespace std;

int countRoutes(int p, vector<int> *adj, int *visited, int *dest) {
    visited[p] = 1;
    int count = 0;

    for(auto u : adj[p])
        if(!visited[u]) {
            count++;
            dest[u] = countRoutes(u,adj,visited,dest);
        }

    return count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m; cin >> n >> m;

    vector<int> adj[n+1];
    int a,b;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
    }

    int dest[n+1] = {0};
    int visited[n+1] = {0};


    return 0;
}