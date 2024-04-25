//Problem Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1099

#include <bits/stdc++.h>

using namespace std;

#define TAM 1000

int pai[TAM+1], peso[TAM+1] = {0}, inimigo[TAM+1] = {0};

int find(int x) {
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void join(int x, int y) {

}

int main() {
    int n; cin >> n;

    for(int i = 1; i <= n; i++)
        pai[i] = i;
    

    return 0;
}