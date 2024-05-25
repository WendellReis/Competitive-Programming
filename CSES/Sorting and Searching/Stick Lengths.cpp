#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(),v.end());

    int median;
    if(v.size()%2 == 1)
        median = v[(int)v.size()/2];
    else
        median = 0.5*(v[(int)v.size()/2] + v[(int)v.size()/2-1]);

    long long tot = 0;
    for(auto u : v)
        tot += abs(u - median);

    cout << tot << "\n";
    return 0;
}