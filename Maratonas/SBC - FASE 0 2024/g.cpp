#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if(n==1)
        return false;
    for(int i=2;i*i<=n;i++) {
        if(n%i==0)
            return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,k; cin >> n >> k;

    vector<int> a(n),b(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];

    return 0;
}