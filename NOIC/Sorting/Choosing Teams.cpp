//Problem Link: https://codeforces.com/problemset/problem/432/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k; cin >> n >> k;

    int v,quant = 0;
    while(n--) {
        cin >> v;
        if(v <= 5-k)
            quant++;
    }

    cout << (int)quant/3 << "\n";
    return 0;
}