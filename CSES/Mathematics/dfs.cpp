#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 7;

    vector<int> adj[n+1];

    adj[1].push_back(5);
    adj[1].push_back(6);
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(2);
    adj[3].push_back(4);
    adj[3].push_back(7);
    adj[4].push_back(3);
    adj[5].push_back(1);
    adj[6].push_back(1);
    adj[7].push_back(3);

    int inicio = 1;
    vector<int> visitados(n+1,0);
    stack<int> p;
    p.push(inicio);
    visitados[inicio] = 1;

    while(!p.empty()) {
        int atual = p.top();
        p.pop();

        cout << atual << " ";

        for(auto u : adj[atual]) {
            if(visitados[u] == 0) {
                visitados[u] = 1;
                p.push(u);
            }
        }
    }

    cout << endl;
    return 0;
}