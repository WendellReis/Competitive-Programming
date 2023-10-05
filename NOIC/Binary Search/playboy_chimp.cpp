#include <bits/stdc++.h>

using namespace std;

int busca(vector<int> v, int k){
    int aux = 0, ini = 0, fim = v.size()-1;

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
    int n,q,v; cin >> n;

    vector<int> h(n);
    for(int i = 0; i < n; i++)
        cin >> h[i];
    
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> v;
        int m = busca(h,v);

        if(m == -1)
            cout << "X " << h[m] << "\n";
        else{
            cout << h[m] << " ";
            if(m+1 == n)
                cout << "X\n";
            else{
                if(h[m+1] == v){
                    if(m+2 == n)
                        cout << "X\n";
                    else
                        cout << h[m+2] << "\n";
                } else
                    cout << h[m+1] << "\n";
            }
        }
    }
    return 0;
}