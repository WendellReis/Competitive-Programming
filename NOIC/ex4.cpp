#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore();

    while(t--) {
        string s; cin >> s;

        int q = 1, i = 0;

        while(i < s.size()) {
            if(s[i] == '1')
                break;
            i++;
        }

        for(; i < s.size()-1; i++) {
            if(s[i] != s[i+1]) {
                q++;
                while(s[i] != '1')
                    i++;
            }
        }
        cout << q << "\n";
    }

    //10011000

    return 0;
}