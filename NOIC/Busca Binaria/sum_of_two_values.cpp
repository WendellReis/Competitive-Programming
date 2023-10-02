#include <bits/stdc++.h>

using namespace std;

int busca(vector<pair<int,int>> v, int k, int ini, int fim){
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
    
    int n,k; cin >> n >> k;
    vector<pair<int,int>> v;
    int value;
    for(int i = 0; i < n; i++){
        cin >> value;
        v.push_back({value,i+1});
    }

    sort(v.begin(),v.end());
    for(int i = 0; i < n; i++){
        if(v[i].first > k/2)
            break;
        int p = busca(v,k-v[i].first,i+1,n-1);
        if(p != -1){
            cout << v[i].second << " " << p << "\n";
            return 0;
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}