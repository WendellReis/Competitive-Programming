#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n,k; cin >> n >> k;

        cin.ignore();
        string s = "";
        for(int i = 0; i < n; i++)
            for(int j = 0; j < k; j++)
                s.push_back('a'+j);
        cout << s << '\n';
    }

    return 0;
}