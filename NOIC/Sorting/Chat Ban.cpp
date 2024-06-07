#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll quant(ll linhas, ll k) {
    if(linhas <= k)
        return linhas*(linhas+1)/2;
    return k * k - (2 * k - 1 - linhas) * (2 * k - linhas) / 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while(t--) {
        ll k,x; cin >> k >> x;
        
        ll l = 1, r = 2*k-1, numLinhas = 2*k-1;
        while(l <= r) {
            ll linhas = (l+r)/2;
            if(quant(linhas,k) < x)
                l = linhas+1;
            else {
                numLinhas = linhas;
                r = linhas-1;
            }
        }

        cout << numLinhas << "\n";
    }

    return 0;
}