//Problem Link: https://cses.fi/problemset/task/1716

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m; cin >> n >> m;

    long long prod = 1;
    while(m != 0 && n != 0) {
        prod = ((prod*(m+1))%((long long)(1e10 + 7)));
        m--;
        n--;
    }

    cout << prod << '\n';
    return 0;
}
