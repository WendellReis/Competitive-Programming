#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll f(ll x, ll n) {
    ll tot = 0;
    for(int i = 1; i <= n; i++)
        tot+=min(n,x/i);
    return tot;
}

int main() {
    ll n; cin >> n;

    ll l = 1, r = n*n;
    while(l < r) {
        ll mid = (l+r)/2;

        if(f(mid,n) >= (n*n+1)/2)
            r = mid;
        else
            l = mid+1;
    }

    cout << r << "\n";
    return 0;
}