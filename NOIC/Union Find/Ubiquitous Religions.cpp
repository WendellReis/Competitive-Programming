//Problem Link: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1524

#include <bits/stdc++.h>

using namespace std;

#define vet vector<int>

int find(int x, vet& pai) {
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x],pai);
}

void join(int x, int y, vet& pai, vet peso, int& q) {
    x = find(x,pai);
    y = find(y,pai);

    if(x == y) return;

    if(peso[x] < peso[y]) pai[x] = y;
    else if(peso[x] > peso[y]) pai[y] = x;
    else {
        pai[x] = y;
        peso[y]++;
    }

    q++;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,m, t = 1; cin >> n >> m;

    while(n != 0 && m != 0) {
        int q = 0;
        vet pai(n+1), peso(n+1,0);
        for(int i = 1; i <= n; i++)
            pai[i] = i;
        
        for(int i = 0,a,b; i < m; i++) {
            cin >> a >> b;
            join(a,b,pai,peso,q);
        }

        printf("Case %d: %d\n",t,n-q);
        t++;
        cin >> n >> m;
    }

    return 0;
}