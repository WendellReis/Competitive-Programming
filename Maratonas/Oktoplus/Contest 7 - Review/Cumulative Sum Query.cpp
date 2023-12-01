#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    vector<ll> v(n+1); v[0] = 0;
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        v[i]+=v[i-1];
    }

    int q,a,b; cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> a >> b;
        cout << v[b+1] - v[a] << "\n";
    }
    return 0;
}