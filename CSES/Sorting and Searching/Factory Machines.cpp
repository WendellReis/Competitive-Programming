#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

ll countProducts(vector<ll> v, int temp) {
    ll count = 0;
    for(int i = 0; i < (int)v.size(); i++)
        count = count + (ll)(temp/v[i]);
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n,t; cin >> n >> t;

    vector<ll> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    ll l = 1, r(t*v[0]),resp;
    while(l <= r) {
        ll mid = l + (r-l)/2;

        if(countProducts(v,mid) >= t) {
            r = mid-1;
            resp = mid;
        }
        else l = mid+1;
    }
    cout << resp << "\n";
    return 0;
}