#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore();

    while(t--) {
        string s; cin >> s;

        bool f = false;
        for(int i = 0; i < s.size()-1; i++)
            if(s[i] != s[i+1]) {
                f = true;
                swap(s[i],s[i+1]);
                break;
            }
        if(f) cout << "YES\n" << s << "\n";
        else cout << "NO\n";
    }

    return 0;
}