//Problem Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=841

#include <bits/stdc++.h>

using namespace std;

int solve(int n) {
    if(n < 0)
        return 0;
    if(n == 0)
        return 1;
    return solve(n-1) + solve(n-2);
}

int main() {
    ios_base::sync_with_stdio();
    cin.tie(0);
    
    int n; cin >> n;
    while(n != 0) {
        cout << solve(n) << "\n";
        cin >> n;
    }

    return 0;
}