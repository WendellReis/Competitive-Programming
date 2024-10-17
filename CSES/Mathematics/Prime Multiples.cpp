#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ll n; cin >> n;

    vector<ll> p(n);
    for(ll &a : p) {
        cin >> a;
    }

    ll sum = 0;
    for(int i = 0; i < n; i++) {
        ll tot = n/p[i];
        for(int  j = i-1; j >= 0; j--)
            tot-=tot/p[j];
        sum+=tot;
    }

    cout << sum << "\n";
    return 0;
}