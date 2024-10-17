#include <bits/stdc++.h>

using namespace std;

#define par pair<int,int>
#define F first
#define S second

int main() {
    int n; cin >> n;

    vector<par> v;
    set<par> s;
    map<par,par> m;
    for(int i = 0; i < n; i++) {
        cin >> v[i].F >> v[i].S;
        s.insert(v[i]);
        m[v[i]] = {0,0};
    }

    for(auto u = s.begin(); u != s.end(); u++) {
        par p = *u;
        auto it = s.upper_bound({p.F,p.F});
        while(it != s.end()) {
            if((*it).F == 0) {

            }
            it++;
        }
    }


    for(int i = 0; i < n; i++)
        cout << m[v[i]].F << " ";
    cout << "\n";
    for(int i = 0; i < n; i++)
        cout << m[v[i]].S << " ";
    cout << "\n";

    return 0;
}