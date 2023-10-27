#include <bits/stdc++.h>

using namespace std;

int busca(vector<int> v, int k){
    int aux = 0, ini = 0, fim = v.size()-1;

    while(ini <= fim){
        int meio = (ini+fim)/2;

        if(v[meio] > k){
            aux = meio;
            fim = meio-1;
        } else if(v[meio] < k)
            ini = meio+1;
        else
            return meio+1;
    }

    return aux;
}

int main(){
    int n,m; cin >> n >> m;
                
    vector<int> v(n,INT32_MAX), p(n);
    for(int i = 0; i < n-1; i++)
        cin >> v[i];
    
    for(int i = 0; i < n; i++)
        cin >> p[i];

    int k;
    for(int i = 0; i < m; i++){
        cin >> k;
        cout << p[busca(v,k)] << " ";
    }

    return 0;
}