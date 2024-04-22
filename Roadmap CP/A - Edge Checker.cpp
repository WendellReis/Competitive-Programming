//Problem Link: https://atcoder.jp/contests/abc240/tasks/abc240_a

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b; cin >> a >> b;

    int i = min(a,b);
    int f = max(a,b);

    if(i == f-1 || (i == 1 && f == 10))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}