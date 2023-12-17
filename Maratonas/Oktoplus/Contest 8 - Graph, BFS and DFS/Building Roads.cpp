#include <bits/stdc++.h>

using namespace std;

void bfs(int p, vector<int> *adj, int *visited) {
    visited[p] = 1;

    for(auto u : adj[p])
        if(!visited[u])
            bfs(u,adj,visited);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m; cin >> n >> m;

    vector<int> adj[n+1];
    int a,b;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> roads;
    int visited[n+1] = {0};
    for(int i = 1; i <= n; i++)
        if(!visited[i]) {
            roads.push_back(i);
            bfs(i,adj,visited);
        }
        
    cout << roads.size() - 1 << "\n";

    for(int i = 1; i < roads.size(); i++)
        cout << roads[0] << " " << roads[i] << "\n";
    return 0;
}