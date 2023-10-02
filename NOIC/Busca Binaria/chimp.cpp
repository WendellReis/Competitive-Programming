#include <bits/stdc++.h>

using namespace std;

int busca(vector<long long> v, int k){
    int ini = 0, fim = v.size()-1, aux = 0;

    while(ini <= fim){
        int meio = (ini+fim)/2;

        if(v[meio] > k)
            fim = meio-1;
        else if(v[meio] < k){
            ini = meio+1;
            aux = meio;
        }
        else
            return meio-1;
    }

    return aux;
}

int main(){
    int n; cin >> n;

    vector<long long> v;
    v.push_back(0);
    int k;
    for(int i = 0; i < n; i++){
        cin >> k;
        v.push_back(k);
    }

    int q; cin >> q;
    for(int i = 0; i < q; i++){
        cin >> k;
        int p = busca(v,k);

        if(v[p] == 0)
            cout << "X ";
        else
            cout << v[p] << " ";

        if(p+1 > n){
            cout << "X\n";
            continue;
        }

        if(v[p+1] == k){
            if(p+2 > n)
                cout << "X\n";
            else
                cout << v[p+2] << "\n";
        } else
            cout << v[p+1] << "\n";
    }

    return 0;
}