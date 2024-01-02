#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x,n; cin >> x >> n;

    set<int> l;
    l.insert(0),l.insert(x);

    for(int i = 0; i < n; i++)
        cin >> x, l.insert(x);
    
    
    return 0;
}