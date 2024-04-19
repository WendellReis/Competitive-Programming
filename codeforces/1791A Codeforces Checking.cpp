#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--) {
        char c; cin >> c;

        if(c == 'c' || c == 'o' || c == 'd' || c == 'e' ||
        c == 'f' || c == 'e' || c == 's' || c == 'r')
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}