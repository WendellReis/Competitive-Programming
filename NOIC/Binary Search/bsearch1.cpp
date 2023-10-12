#include <iostream>

using namespace std;

int busca(int *v, int n,int k){
    int ini = 0, fim = n-1;

    while(ini <= fim){
        int meio = (ini+fim)/2;

        if(v[meio] > k)
            fim = meio-1;
        else if(v[meio] < k)
            ini = meio+1;
        else{
            if(meio == 0)
                return meio;
            if(v[meio - 1] == k)
                fim = meio-1;
        }
    }

    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q; cin >> n >> q;
    int v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int k;
    for(int i = 0; i < q; i++){
        cin >> k;
        cout << busca(v,n,k) << "\n";
    }
        
    return 0;
}