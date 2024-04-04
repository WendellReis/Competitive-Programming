#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,c; cin >> n >> c;

    vector<int> adj[n+1];
    for(int i = 0; i < c; i++) {
        int p,quant; cin >> p >> quant;

        for(int j = 0,x; j < quant; j++)
            cin >> x, adj[p].push_back(x);
    }

    int visited[n+1] = {0};
    for(int i = 1; i <= n; i++)
        for(int j = 0; j < adj[i].size(); j++)
            visited[adj[i][j]] = 1;

    for(int i = 1; i <= n; i++)
        if(visited[i] == 0)
            cout << i << "\n";
    return 0;
}