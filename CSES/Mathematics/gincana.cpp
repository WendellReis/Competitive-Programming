#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    vector<int> adj[n+1];

    for(int i = 0; i < m; i++) {
        int u,v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> visitados(n+1,0);
    int quant = 0;

    for(int i = 1; i <= n; i++) {
        if(visitados[i] == 0) {
            visitados[i] = 1;
            quant++;

            stack<int> s;
            s.push(i);

            while(!s.empty()) {
                int atual = s.top();
                s.pop();

                for(auto u : adj[atual]) {
                    if(visitados[u] == 0) {
                        visitados[u] = 1;
                        s.push(u);
                    }
                }
            }
        }
    }

    cout << quant << endl;


    return 0;
}