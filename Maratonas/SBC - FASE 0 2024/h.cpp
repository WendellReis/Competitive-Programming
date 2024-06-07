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
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        int l = n/2;
        int r = l+1;
        bool pass = false;
        while(l >= 1 && r < n) {
            if(!isPrime(l) && !isPrime(r)) {
                pass = true;
                break;
            }

            l--;
            r++;
        }

        if(pass) cout << l << " " << r << "\n";
        else cout << "-1\n";
    }

    return 0;
}