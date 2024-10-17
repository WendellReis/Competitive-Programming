#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    set<pair<int,int>> s;
    for(int i = 1,k; i <= n; i++) {
        cin >> k;
        auto it = s.lower_bound({k+1,0});
        if(it != s.end())
            s.erase(it);
        s.insert({k,i});
    }

    cout << s.size() << "\n";
    return 0;
}