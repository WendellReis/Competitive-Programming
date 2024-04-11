//Problem Link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&category=226&page=show_problem&problem=2999

#include <bits/stdc++.h>

using namespace std;

int solve(int b) {
    if(b < 2)
        return 0;
    if(b == 2)
        return 1;

    int full = b/3;
    return full + solve(b - 2*full);
}

int main() {
    int n; cin >> n;

    while(n != 0) {
        cout << solve(n) << "\n";
        cin >> n;
    }

    return 0;
}