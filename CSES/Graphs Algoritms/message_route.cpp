#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;

    vector<int> adj[n+1];
    int v1,v2;
    for(int i = 0; i < m; i++){
        cin >> v1 >> v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }

    int dist[n+1] = {0}, visited[n+1] = {0};
    visited[1] = 1;
    queue<int> q;
    q.push(1);
    while (!q.empty()) {
        int s = q.front(); q.pop();
        if(s == n)
            break;
        for (auto u : adj[s]) {
            if (visited[u] == 1) continue;
            visited[u] = 1;
            dist[u] = dist[s]+1;
            q.push(u);
        }
    }

    if(dist[n] == 0){
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    vector<int> path;
    int node = n;
    while(node != 1){
        path.push_back(node);
        for(auto u: adj[node])
            if(dist[u] == dist[node] - 1){
                node = u;
                break;
            }
    }
    cout << path.size() + 1 << "\n1 ";
    for(int i = path.size()-1; i >= 0; i--)
        cout << path[i] << " ";
    return 0;
}