#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,t; cin >> n;

    vector<pair<int,int>> v1,v2,v3;
    for(int i = 1; i <= n; i++) {
        cin >> t;
        if(t == 1) v1.push_back({t,i});
        else if(t == 2) v2.push_back({t,i});
        else v3.push_back({t,i});
    }

    int quant = min(v1.size(),min(v2.size(),v3.size()));
    cout << quant << "\n";
    
    if(quant != 0)
        for(int i = 0; i < quant; i++)
            cout << v1[i].S << " " << v2[i].S << " " << v3[i].S << "\n";
    
    return 0;
}