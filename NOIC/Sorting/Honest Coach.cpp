//Problem Link: https://codeforces.com/contest/1360/problem/B

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    
    while(t--) {
        int n; cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(),v.end());

        int dif = v[1] - v[0];
        for(int i = 1; i < n-1; i++)
            dif = min(v[i+1]-v[i],dif);

        cout << dif << "\n";
    }

    return 0;
}