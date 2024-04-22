//Problem Link: https://atcoder.jp/contests/abc204/tasks/abc204_b

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    int sum = 0;
    for(int i = 0,a; i < n; i++) {
        cin >> a;
        sum = sum + ((int)(a>10) * (a-10));
    }
    cout << sum << "\n";
    return 0;
}