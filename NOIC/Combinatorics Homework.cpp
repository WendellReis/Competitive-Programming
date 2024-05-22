#include <bits/stdc++.h>

using namespace std;

int main() {
    int l[3],m,t;

    cin >> t;
    while(t--) {
        cin >> l[0] >> l[1] >> l[2] >> m;
        sort(l,l+3);

        int tot = l[0]+l[1]+l[2]-3;
        if(tot < m)
            cout << "NO\n";
        else if(tot == m)
            cout << "YES\n";
        else {
            
        }
    }

    return 0;
}