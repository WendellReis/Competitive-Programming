//Problem Link: https://neps.academy/br/exercise/309

#include <bits/stdc++.h>

using namespace std;

int pai[1001], peso[1001] = {0};

int find(int x) {
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void join(int x, int y, int& q) {
    x = find(x);
    y = find(y);

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
    int n,m, q = 0; cin >> n >> m;

    for(int i = 1; i <= n; i++)
        pai[i] = i;

    for(int i = 0,x,y; i < m; i++) {
        cin >> x >> y;
        join(x,y,q);
    }

    cout << n-q << '\n';
    return 0;
}