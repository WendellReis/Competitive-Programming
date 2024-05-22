#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, count = 0; cin >> n;
        int v[26] = {0};

        cin.ignore();
        string s; cin >> s;
        for(int i = 0; i < n; i++)
            v[s[i]-'A']++;

        for(int i = 0; i < 26; i++)
            if(v[i] >= i+1)
                count++;
        cout << count << "\n";
        
    }
    
    return 0;
}