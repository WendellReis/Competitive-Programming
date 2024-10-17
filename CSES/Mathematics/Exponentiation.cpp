#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll modpow(int x, int n, int m) {
    if(n == 0) return 1;
    ll u = modpow(x,n/2,m);
    u = (u*u)%m;
    if(n%2) u = (u*x)%m;
    return u;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int m = pow(10,9) + 7;
    while(n--) {
        int a,b; cin >> a >> b;

        if(a == 0) {
            if(b == 0) printf("1\n");
            else printf("0\n");
        } else
            printf("%lld\n",modpow(a,b,m));
    }

    return 0;
}