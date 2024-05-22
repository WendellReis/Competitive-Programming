//Problem Link: https://codeforces.com/problemset/problem/1399/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(),v.end());
        bool pass = true;
        for(int i = 0; i < n-1; i++)
            if(v[i+1]-v[i] > 1) {
                pass = false;
                break;
            }

        if(pass) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}