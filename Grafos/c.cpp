#include <bits/stdc++.h>

using namespace std;

const long long INF = LONG_LONG_MAX;

vector<long long> dist;
vector<bool> processed;
vector<vector<pair<long long,long long>>> adj;

void dijkstra(long long x) {
    dist[x] = 0;

    priority_queue<pair<long long,long long>> q;
    q.push({0,x});
    while(!q.empty()) {
        long long a = q.top().second; q.pop();

        if(processed[a]) continue;
        processed[a] = true;

        for(auto u : adj[a]) {
            long long b = u.first, w = u.second;
            if(dist[a] + w < dist[b]) {
                dist[b] = dist[a] + w;
                if(!processed[b])
                    q.push({-dist[b],b});
            }
        }
    }
}

int main() {
    long long n,m; cin >> n >> m;

    dist = vector<long long>(n+1,INF);
    processed = vector<bool>(n+1,false);
    adj = vector<vector<pair<long long,long long>>>(n+1);

    while(m--) {
        long long a,b,w; cin >> a >> b >> w;

        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }

    long long x = 1;

    dijkstra(x);

    if(dist[n] == INF) {
        cout << "-1\n";
        return 0;
    }

    vector<long long> path; path.push_back(n);
    long long a = n;
    while(a != x) {
        long long menor = INF, idx = -1;

        for(auto u : adj[a]) {
            long long b = u.first, w = u.second;
            if(dist[b] + w < menor) {
                menor = dist[b] + w;
                idx = b;
            }
        }

        path.push_back(idx);
        a = idx;
    }

    for(long long i = path.size()-1; i >= 0; i--)
        printf("%d ",path[i]);
    cout << endl;

    return 0;
}