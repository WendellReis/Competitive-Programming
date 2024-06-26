#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m; cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0, r = 0, value = 0, maxValue = 0;
    v.push_back(0);
    while(r <= n) {
        if(value < m) {
            value+=v[r];
            r++;
        } else if(value > m) {
            value-=v[l];
            l++;
        } else {
            maxValue = m;
            break;
        }
        if(value <= m)
            maxValue = max(value,maxValue);
    }

    cout << maxValue << "\n";
    return 0;
}