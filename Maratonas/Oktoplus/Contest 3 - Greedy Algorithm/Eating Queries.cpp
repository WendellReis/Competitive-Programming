#include <bits/stdc++.h>

using namespace std;

#define ll long long

int search(vector<ll> v, ll k){
    int i = 0, f = (int)v.size() - 1, aux = -1;
    while(i <= f){
        int meio = (i+f)/2;

        if(v[meio] < k)
            i = meio + 1;
        else if(v[meio] > k){
            aux = meio + 1;
            f = meio - 1;
        } else {
            return meio + 1;
        }
    }
    return aux;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;

    while(t > 0){
        int n,q; cin >> n >> q;
        
        vector<ll> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.rbegin(),v.rend());
        for(int i = 1; i < n; i++)
            v[i]+=v[i-1];
        
        ll k;
        for(int i = 0; i < q; i++){
            cin >> k;
            cout << search(v,k) << "\n";
        }
        t--;
    }
    return 0;
}