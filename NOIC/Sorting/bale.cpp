//Problem Link: https://neps.academy/br/exercise/536

#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

int main() {
    int n; cin >> n;

    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i].F, v[i].S = i;
    
    sort(v.begin(),v.end());

    int count = 0;
    set<int> s; s.insert(v[n-1].S);
    for(int i = n-2; i >= 0; i--) {
        auto it = s.upper_bound(v[i].S);

        while(it != s.end()) {
            s.erase(it);
            it = s.upper_bound(v[i].S);
        }

        count+=s.size();
        s.insert(v[i].S);
    }

    cout << count << "\n";
    return 0;
}