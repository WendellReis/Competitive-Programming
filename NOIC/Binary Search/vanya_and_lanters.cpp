#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;

    vector<int> v;
    int k;
    for(int i = 0; i < n; i++){
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(),v.end());
    double d_max = v[0];
    for(int i = 0; i < n-1; i++)
        d_max = max(d_max,(double)(v[i+1]-v[i])/2);

    cout << fixed << setprecision(10) << d_max << "\n";
    return 0;
}