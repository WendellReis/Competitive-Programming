/*
Problem Name: BSEARCH1
Problem Link: https://www.spoj.com/problems/BSEARCH1/en/
Author: Wendell R. M. Matias
*/
#include <bits/stdc++.h>

using namespace std;

int search(int *v, int n, int k){
    int ini = 0, fim = n-1, meio, pos = -1;

    while(ini <= fim){
        meio = (ini+fim)/2;

        if(v[meio] > k)
            fim = meio-1;
        else if(v[meio] < k)
            ini = meio+1;
        else{
            pos = meio;
            fim = meio-1;
        }

    }
    return pos;
}

int main(){
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n,q,k; cin >> n >> q;
    int v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 0; i < q; i++){
        cin >> k;
        printf("%d\n", search(v,n,k));
    }

    return 0;
}