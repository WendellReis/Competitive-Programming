#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,q; cin >> n;
    
    map<int,vector<int>> m;
    for(int i = 1,v; i <= n; i++) {
        cin >> v;
        
        auto it = m.find(v);
        if(it == m.end()) {
            m[v] = vector<int>();
            m[v].push_back(i);
        } else
            it->second.push_back(i);
    }

    cin >> q;
    while(q--) {
        int l,r,x; cin >> l >> r >> x;

        auto it = m.find(x);
        if(it == m.end())
            cout << "0\n";
        else {
            auto ini = lower_bound(it->second.begin(),it->second.end(),l);
            if(ini == it->second.end())
                cout << "0\n";
            else {
                auto fim = upper_bound(it->second.begin(),it->second.end(),r);
                fim--;
                cout << (int)(fim-it->second.begin()) - (int)(ini-it->second.begin()) + 1 << "\n";
            }
        }
    }

    return 0;
}