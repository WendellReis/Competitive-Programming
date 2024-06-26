#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;
    
    ll res;
    if(n%2 == 0)
        res = pow(2,n/2)*pow(2,n/2);
    else
        res = pow(2,(int)n/2)*pow(2,(int)n/2+1);
    
    cout << res%(1000000007) << "\n";
    return 0;
}