//Problem Link: https://resources.beecrowd.com/repository/UOJ_1253.html

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    while(n--) {
        cin.ignore();
        string s; cin >> s;
        int k; cin >> k;

        for(int i = 0; i < s.size(); i++) {
            if(s[i]-k < 'A')
                cout << char(s[i]-k + 26);
            else
                cout << (char)(s[i]-k);
        }
        cout << "\n";
    }

    return 0;
}