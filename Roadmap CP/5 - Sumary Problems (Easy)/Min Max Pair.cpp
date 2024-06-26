#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

int main() {
    int n; cin >> n;

    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i].F,v[i].S = i+1;
    sort(v.begin(),v.end());

    for(int i = 0; i < n; i++)
        cout << v[i].F << " ";
    cout << endl;
    for(int i = 0; i < n; i++)
        cout << v[i].S << " ";
    cout << endl;
    return 0;
}