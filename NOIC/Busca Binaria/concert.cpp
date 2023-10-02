#include <bits/stdc++.h>

using namespace std;

int busca(vector<int> v, int k){
    int ini = 0, fim = v.size()-1, aux = -1;

    while(ini <= fim){
        int meio = (ini+fim)/2;

        if(v[meio] > k)
            fim = meio-1;
        else if(v[meio] < k){
            aux = meio;
            ini = meio+1;
        }
        else
            return meio;
    }

    return aux;
}

int main(){
    int n,m; cin >> n >> m;

    vector<int> v;
    int k;
    for(int i = 0; i < n; i++){
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(),v.end());

    for(int i = 0; i < m; i++){
        cin >> k;
        int p = busca(v,k);
        if(p != -1){
            cout << v[p] << "\n";
            v.erase(v.begin()+p);
        } else
            cout << "-1\n";
    }
    return 0;
}