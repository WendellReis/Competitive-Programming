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
                dist[b] = dist[a] + w;
                if(!processed[b])
                    q.push({-dist[b],b});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string s1,s2; cin >> s1 >> s2;

    int m; cin >> m;

    int tam = 126-33+1;
    adj = vector<vector<pair<int,int>>>(tam);

    while(m--) {
        char c1,c2;
        int w;
        cin >> c1 >> c2 >> w;

        adj[(int)(c1-33)].push_back({(int)(c2-33),w});
        adj[(int)(c2-33)].push_back({(int)(c1-33),w});
    }

    long long sum = 0;

    for(int i = 0; i < s1.size(); i++) {
        dist = vector<int>(tam,INF);
        processed = vector<bool>(tam,false);

        int x = s1[i]-33, y = s2[i]-33;

        dijkstra(x,y);

        if(dist[y] == INF) {
            cout << "-1\n";
            return 0;
        }

        sum+=dist[y];
    }

    cout << sum << "\n";
    return 0;
}