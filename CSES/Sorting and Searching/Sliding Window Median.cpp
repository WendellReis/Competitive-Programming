#include <bits/stdc++.h>

using namespace std;

#define par pair<int,int>
#define F first
#define S second

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,k; cin >> n >> k;
    
    set<par> s;
    vector<par> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i].F, v[i].S = i;

    for(int i = 0; i < k; i++)
        s.insert(v[i]);

    auto median = s.begin();
    advance(median,(int)s.size()/2);
    cout << median->F << "\n";

    for(int i = k; i < n; i++) {
        par er = v[i-k];
        
        if(er.F <= median->F && v[i].F <= median->F) {
            s.erase(er);
            s.insert(v[i]);
            median = s.lower_bound({median->F,-1});
            median--;
        } else if(er.F >= median->F && v[i].F >= median->F) {
            s.erase(er);
            s.insert(v[i]);
            median = s.upper_bound({median->F,-1});
        }
        cout << median->F << "\n";
    }

    return 0;
}