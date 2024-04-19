#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        cin.ignore();
        string s; cin >> s;
        string decode;

        for(int i = s.size()-1; i >= 0; i--) {
            if(s[i] == '0') {
                decode.push_back('a' + 10*(s[i-2]-'0') + s[i-1]-'0' - 1);
                i-=2;
            } else
                decode.push_back('a' + s[i]-'1');
        }

        for(int i = decode.size()-1; i >= 0; i--)
            cout << decode[i];
        cout << "\n";
    }

    return 0;
}