#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,d;
    cin >> n >> d;

    int no[n][2];
    for(int i = 0; i < n; i++)
        cin >> no[i][0] >> no[i][1];
    
    vector<int> adj[n];
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            //no i e no j
            if(sqrt(pow(no[i][0] - no[j][0],2) + pow(no[i][1] - no[j][1],2)) <= d) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }

    vector<int> visitados(n,0);
    visitados[0] = 1;
    stack<int> p;
    p.push(0);

    while(!p.empty()) {
        int atual = p.top();
        p.pop();

        for(auto u : adj[atual]) {
            if(visitados[u] == 0) {
                visitados[u] = 1;
                p.push(u);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(visitados[i] == 0) {
            cout << "N\n";
            return 0;
        }
    }
    cout << "S\n";
    return 0;
}