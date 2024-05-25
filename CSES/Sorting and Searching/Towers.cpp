#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    vector<pair<int,int>> v(n);
    for(int i = 0,k; i < n; i++)
        cin >> k, v[i] = {k,i};
    
    int tot = 1;
    for(int i = 1; i < n; i++)
        if(v[i].F > v[i-1].F && v[i].S < v[i-1].S)
            tot++;

    cout << tot << "\n";
    return 0;
}