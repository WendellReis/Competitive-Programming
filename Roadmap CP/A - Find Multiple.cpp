//Problem Link: https://atcoder.jp/contests/abc220/tasks/abc220_a

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c; cin >> a >> b >> c;

    if(c > b || c * (int)(b/c) < a)
        cout << "-1\n";
    else
        cout << c * (int)(b/c) << "\n";
    return 0;
}