#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,b; cin >> n;
    
    for(int i = 1; i <= n; i++) {
        cin >> b;

        if(b%i == 0) cout << "NO\n";
        else cout << "YES\n";
    }
    
    return 0;
}