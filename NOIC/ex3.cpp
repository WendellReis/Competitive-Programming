#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int a,b,c,d; cin >> a >> b >> c >> d;

        bool f = false;
        if(max(c,d) >= max(a,b) || max(c,d) <= min(a,b))
            if(min(c,d) <= max(a,b) || min(c,d) >= min(a,b))
                f = true;
        
        if(f) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}