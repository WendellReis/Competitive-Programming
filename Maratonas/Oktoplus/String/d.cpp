#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        cin.ignore();

        string s; cin >> s;
        int v[(int)('z'-'a'+1)] = {0};
        for(int i = 0; i < s.size(); i++)
            v[s[i]-'a']++;
        
        bool pass = true;
        for(int i = 0; i < 'z'-'a'+1; i++)
            if(v[i]%2 == 1) {
                pass = false;
                break;
            }
        if(pass) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

