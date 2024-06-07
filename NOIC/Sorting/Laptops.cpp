//Problem Link: https://codeforces.com/problemset/problem/456/A

#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

int main() {
    int n; cin >> n;

    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i].F >> v[i].S;
    
    sort(v.begin(),v.end());
    for(int i = 0; i < n-1; i++)
        if(v[i].S > v[i+1].S) {
            cout << "Happy Alex\n";
            return 0;
        }
    cout << "Poor Alex\n";

    return 0;
}