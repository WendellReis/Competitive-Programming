//Problem Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1446

#include <bits/stdc++.h>

using namespace std;

int find(int x, int* ini) {
    if(ini[x] == x) return x;
    return ini[x] = find(ini[x],ini);
}

void join(int x, int y, int* ini, int* peso, int* tam) {
    x = find(x,ini);
    y = find(y,ini);

    if(x == y) return;

    if(peso[x] < peso[y]) {
        ini[x] = y;
        tam[y]+=tam[x];
    }
    else if(peso[y] < peso[x]){
        ini[y] = x;
        tam[x]+=tam[y];
    }
    else {
        ini[x] = y;
        peso[y]++;
        tam[y]+=tam[x];
    }
}

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        int ini[n+1],peso[n+1] = {0}, tam[n+1];
        for(int i = 1; i <= n; i++)
            ini[i] = i, tam[i] = 1;

        for(int i = 1; i  <= n; i++) {
            int p,k; cin >> p;
            while(p--) {
                cin >> k;
                join(i,k,ini,peso,tam);
            }
        }

        int invited = 0;
        for(int i = 1; i <= n; i++)
            invited = max(invited,n-tam[ini[i]]+1);
        cout << invited << "\n";
    }

    return 0;
}