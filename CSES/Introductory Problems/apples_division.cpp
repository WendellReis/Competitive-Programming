#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector<ll> subset;
ll dif = -1;
ll soma = 0;

void search(int k, int n, vector<ll> macas);
ll somaVet(vector<ll> vet);

int main(){
    int n; cin >> n;
    ll p;
    vector<ll> macas;
    for(int i = 0; i < n; i++){
        cin >> p;
        macas.push_back(p);
        soma+=p;
    }
    search(0,n,macas);
    cout << dif << endl;
    return 0;
}

void search(int k, int n, vector<ll> macas){
    if(k == n){
        ll difSubset = abs(soma-2*somaVet(subset));
        if(dif == -1)
            dif = difSubset;
        if(difSubset < dif)
            dif = difSubset;
    } else{
        subset.push_back(macas[k]);
        search(k+1,n,macas);
        subset.pop_back();
        search(k+1,n,macas);
    }
}

ll somaVet(vector<ll> vet){
    ll s = 0;
    for(ll i = 0; i < vet.size(); i++)
        s+= vet[i];
    return s;
}