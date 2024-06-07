#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x,n; cin >> x >> n;

    set<int> s,dist;
    s.insert(0),s.insert(x);
    dist.insert(x);
    int i = 0, f = 8;

    int k,res = 0;
    while(n--) {
        cin >> k;
        
        auto u = s.upper_bound(k);
        auto l = s.lower_bound(k);
        l--;

        res = max(res,max(*u-k,k-(*l)));
        cout << res << " ";
        s.insert(k);
    }
    cout << "\n";

    return 0;
}