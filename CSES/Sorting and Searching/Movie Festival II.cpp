#include <bits/stdc++.h>

using namespace std;

#define f first
#define i second

void watch(set<pair<int,int>> &s) {
    pair<int,int> m = {0,0}, aux = {0,0};

    while(!s.empty()) {
        auto it = s.upper_bound({aux.f+1,aux.i});
        if(it == s.end())
            return;
        if(it->i >= m.f) {
            m = {it->f,it->i};
            aux = m;
            s.erase(it);
        } else
            aux = {it->f,it->i};
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,k; cin >> n >> k;
    set<pair<int,int>> s;
    for(int i = 0,a,b; i < n; i++) {
        cin >> a >> b;
        s.insert({b,a});
    }

    while(k-- && !s.empty())
        watch(s);

    cout << n-s.size() << "\n";
    return 0;
}