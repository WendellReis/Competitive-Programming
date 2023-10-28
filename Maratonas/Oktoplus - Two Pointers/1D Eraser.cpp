#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll n,m,v; cin >> n >> m;

    vector<ll> prefix(n+2); prefix[0] = 0, prefix[n+1] = LONG_LONG_MAX;
    for(int i = 1; i <= n; i++){
        cin >> prefix[i];
        prefix[i]+=prefix[i-1];
    }

    int idx = 1;
    for(int i = 0; i < m; i++){
        cin >> v;
        while(prefix[idx] < v)
            idx++;
        cout << idx << " " << v - prefix[idx-1] << "\n";
    }
    return 0;
}