#include <bits/stdc++.h>

using namespace std;

int busca(vector<pair<int,int>> v, int k){
    int ini = 0, fim = v.size()-1;

    while(ini <= fim){
        int meio = (ini+fim)/2;

        if(v[meio].first > k)
            fim = meio-1;
        else if(v[meio].first < k)
            ini = meio+1;
        else
            return v[meio].second;
    }

    return -1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,q; cin >> n >> q;

    vector<pair<int,int>> v;
    int ant = INT32_MAX, k;

    for(int i = 0; i < n; i++){
        cin >> k;
        if(k != ant){
            ant = k;
            v.push_back({k,i});
        }
    }

    for(int i = 0; i < q; i++){
        cin >> k;
        cout << busca(v,k) << "\n";
    }
        
    return 0;
}