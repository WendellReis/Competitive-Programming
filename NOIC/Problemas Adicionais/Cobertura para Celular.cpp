#include <bits/stdc++.h>

using namespace std;

#define par pair<int,int>
#define F first
#define S second

int dist (par a, par b) {
    return (int)ceil(sqrt(pow(a.F-b.F,2)+pow(a.S-b.S,2)));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    set<par> s;
    for(int i = 0,a,b; i < n; i++) {
        cin >> a >> b;
        s.insert({a,b});
    }

    int a; cin >> a;
    queue<par> q; q.push(*s.begin());
    while(!q.empty()) {
        par at = q.front(); q.pop();
        s.erase(at);
        vector<set<par>::iterator> list;

        for(set<par>::iterator it = s.begin(); it != s.end(); it++) {
            par u = *it;
            if(dist(at,u) <= a) {
                q.push(u);
                list.push_back(it);
            }
        }
            
        for(auto u : list)
            s.erase(u);
    }
    
    if(s.size() == 0) cout << "S\n";
    else cout << "N\n";
    return 0;
}