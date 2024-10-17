#include <bits/stdc++.h>

using namespace std;

int modpow(int x, int n, int m) {
    if(n == 0) return 1;
    if(x == 0) return 0;
    long long u = modpow(x,n/2,m);
    u = (u*u)%m;
    if(n%2) u = (u*x)%m;
    return u;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int m = 1e9 + 7;
    while(n--) {
        int a,b,c; cin >> a >> b >> c;
        
        int p = modpow(b,c,m-1);
        cout << modpow(a,p,m) << "\n";
    }

    return 0;
}