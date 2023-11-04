/*
Problem Name: The Platboy Chimp
Problem Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1552
Author: Wendell R. M. Matias
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll search(vector<ll> v, ll n, ll k){
    int i = 0, f = n-1, pos = -1, meio;

    while(i <= f){
        meio = i + (f - i)/2;

        if(v[meio] < k){
            pos = meio;
            i = meio+1;
        } else if(v[meio] > k)
            f = meio-1;
        else
            return meio-1;
    }
    return pos;
}

int main(){
    ll n,q,v; cin >> n;

    vector<ll> vet;
    for(ll i = 0; i < n; i++){
        cin >> v;
        vet.push_back(v);
    }
    sort(vet.begin(),vet.end());
    cin >> q;
    for(ll i = 0; i < q; i++){
        cin >> v;
        ll pos = search(vet,n,v);

        if(pos == -1){
            cout << "X ";
            if(vet[pos+1] == v){
                if(pos+2 == n)
                    cout << "X\n";
                else
                    cout << vet[pos+2] << "\n";
            } else
                cout << vet[pos+1] << "\n";
        } else{
            cout << vet[pos] << " ";
            if(pos+1 == n)
                cout << "X\n";
            else if(vet[pos+1] == v){
                if(pos+2 == n)
                    cout << "X\n";
                else
                    cout << vet[pos+2] << "\n";
            } else
                cout << vet[pos+1] << "\n";
        }
    }

    return 0;
}