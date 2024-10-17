#include <bits/stdc++.h>

using namespace std;

const int INF = INT32_MAX;

vector<int> dist;
vector<bool> processed;
vector<vector<pair<int,int>>> adj;

void dijkstra(int x, int y) {
    dist[x] = 0;

    priority_queue<pair<int,int>> q;
    q.push({0,x});
    while(!q.empty()) {
        int a = q.top().second; q.pop();

        if(a == y) return;
        
        if(processed[a]) continue;
        processed[a] = true;

        for(auto u : adj[a]) {
            int b = u.first, w = u.second;

            if(dist[a] + w < dist[b]) {
                dist[b] = dist[a]+w;
                q.push({-dist[b],b});
            }
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        int v,k; cin >> v >> k;
        
        dist = vector<int>(v+1,INF);
        processed = vector<bool>(v+1,false);
        adj = vector<vector<pair<int,int>>>(v+1);
        
        while(k--) {
            int a,b,c; cin >> a >> b >> c;
            adj[a].push_back({b,c});
            adj[b].push_back({a,c});
        }

        int x,y; cin >> x >> y;
        dijkstra(x,y);
        if(dist[y] == INF) cout << "NO\n";
        else cout << dist[y] << "\n";
    }

    return 0;
}