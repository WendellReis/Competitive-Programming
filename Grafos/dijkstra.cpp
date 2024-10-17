#include <bits/stdc++.h>

using namespace std;

const int INF = INT32_MAX;

int n, m;
vector<int> dist;
vector<bool> visited;
vector<vector<pair<int,int>>> adj;

void dijkstra(int x) {
    for(int i = 1; i <= n; i++)
        dist[i] = INF;
    dist[x] = 0;
    
    priority_queue<pair<int,int>> q;
    q.push({0,x});

    while(!q.empty()) {
        int a = q.top().second; q.pop();

        if(visited[a]) continue;
        visited[a] = true;

        for(auto u : adj[a]) {
            int b = u.first, w = u.second;

            if(dist[a] + w < dist[b]) {
                dist[b] = dist[a] + w;
                q.push({-dist[b],b});
            }
        }
    }

}

int main() {
    //cin >> n >> m;

    n = 5;

    adj = vector<vector<pair<int,int>>>(n+1);
    dist = vector<int>(n+1);
    visited = vector<bool>(n+1,false);

    adj[1].push_back({4,9});
    adj[1].push_back({5,1});
    adj[1].push_back({2,5});
    adj[2].push_back({1,5});
    adj[2].push_back({3,2});
    adj[3].push_back({2,2});
    adj[3].push_back({4,6});
    adj[4].push_back({1,9});
    adj[4].push_back({3,6});
    adj[4].push_back({5,2});
    adj[5].push_back({4,2});
    adj[5].push_back({1,1});

    dijkstra(1);

    for(int i = 1; i <= n; i++)
        printf("%d : %d\n", i, dist[i]);

    return 0;
}