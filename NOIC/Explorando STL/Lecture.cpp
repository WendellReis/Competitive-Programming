//Problem Link: https://codeforces.com/problemset/problem/499/B

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio();
    cin.tie(0);

    int n,m; cin >> n >> m;

    cin.ignore();
    map<string,string> d;
    string a,b;
    for(int i = 0; i < m; i++)
        cin >> a >> b, d[a] = b;
    
    for(int j = 0; j < n; j++) {
        cin >> a;
        b = d[a];

        if(a.size() <= b.size())
            cout << a << " ";
        else
            cout << b << " ";
    }
    cout << "\n";

    return 0;
}