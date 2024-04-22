//Problem Link: https://atcoder.jp/contests/abc205/tasks/abc205_b

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    int v[n+1] = {0};
    bool b = true;

    for(int i = 0,a; i < n; i++) {
        cin >> a;
        if(v[a]) b = false;
        v[a] = 1;
    }

    if(b) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}