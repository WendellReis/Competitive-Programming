//Problem Link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2498

#include <bits/stdc++.h>

using namespace std;

#define ms map<string,string>
#define mi map<string,int>

string find(string x, ms& network) {
    if(network[x] == x) return x;
    return network[x] = find(network[x],network);
}

void join(string x, string y, ms& network, mi& peso, mi& tam) {
    x = find(x,network);
    y = find(y,network);

    if(x == y) return;

    if(peso[x] < peso[y]) {
        network[x] = y;
        tam[y]+=tam[x];
    } else if(peso[x] > peso[y]) {
        network[y] = x;
        tam[x]+=tam[y];
    } else {
        network[x] = y;
        peso[y]++;
        tam[y]+=tam[x];
    }
}

int main() {
    int n,m; cin >> n;

    while(n--) {
        cin >> m;
        cin.ignore();
        
        ms network;
        mi tam, peso;
        string x,y;
        for(int i = 0; i < m; i++) {
            cin >> x >> y;

            if(network.find(x) == network.end()) {
                network[x] = x;
                tam[x] = 1;
                peso[x] = 0;
            }

            if(network.find(y) == network.end()) {
                network[y] = y;
                tam[y] = 1;
                peso[y] = 0;
            }

            join(x,y,network,peso,tam);
            cout << tam[find(x,network)] << '\n';
        }
        
    }
    return 0;
}