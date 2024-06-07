//Problem Link: https://codeforces.com/problemset/problem/230/A
#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int s,n; cin >> s >> n;

    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i].F >> v[i].S;
    sort(v.begin(),v.end());

    for(int i = 0; i < n; i++) {
        if(s <= v[i].F) {
            cout << "NO\n";
            return 0;
        }
        s+=v[i].S;
    }

    cout << "YES\n";
    return 0;
}