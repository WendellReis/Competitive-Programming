#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;

    string r = "";
    for(int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            continue;
        r.push_back('.');
        r.push_back(s[i]);
    }

    cout << r << "\n";
    return 0;
}

