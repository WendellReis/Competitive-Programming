#include <bits/stdc++.h>

using namespace std;

int busca(vector<long long> v, int k){
    int ini = 0, fim = v.size()-1;

    while(ini <= fim){
        int meio = (ini+fim)/2;

        if(v[meio] > k)
            fim = meio-1;
        else if(v[meio] < k)
            ini = meio+1;
        else
            return meio;
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n,m; cin >> n >> m;

    vector<long long> v(n);
    for(int i = 0; i < n; i++)
        scanf("%d",&v[i]);

    int k;
    for(int i = 0; i < m; i++){
        scanf("%d",&k);
        printf("%d\n",busca(v,k));
    }

    return 0;
}