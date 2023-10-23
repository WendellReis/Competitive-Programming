/*
    Problem Name: Josephus Problem I
    Problem Link: https://cses.fi/problemset/task/2162/
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

typedef struct no{
    int n;
    no* prox;
}no;

no* removeNo(no *n){
    cout << n->prox->n << " ";
    n->prox = n->prox->prox;
    return n->prox;
}

int main(){
    int n; cin >> n;
    no *k = (no*)malloc(sizeof(no)), *at;
    k->n = 1;
    at = k;
    for(int i = 2; i <= n; i++){
        no *c = (no*)malloc(sizeof(no));
        c->n = i;
        at->prox = c;
        at = c;
    }
    at->prox = k;

    for(int i = 0; i < n; i++){
        k->prox = removeNo(k);
        k = k->prox;
    }
    cout << "\n";
    return 0;
}