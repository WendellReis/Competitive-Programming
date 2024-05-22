//Problem Link: https://neps.academy/br/exercise/338

#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

int main() {
    int n,m; cin >> n >> m;

    vector<pair<int,int>> v;
    for(int i = 1; i <= n; i++) {
        int t = 0;
        for(int j = 0,k; j < m; j++)
            cin >> k, t+=k;
        v.push_back({t,i});
    }

    sort(v.begin(), v.end());
    printf("%d\n%d\n%d\n",v[0].S,v[1].S,v[2].S);

    return 0;
}