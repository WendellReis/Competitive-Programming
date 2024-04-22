//Problem Link: https://atcoder.jp/contests/abc220/tasks/abc220_c

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;
    long long x, sum = 0, tot = 0;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i], sum+=a[i];

    cin >> x;

    tot = n*floor(x/sum);

    sum = floor(x/sum)*sum;
    for(int i = 0; sum <= x; i++,tot++) {
        sum+=a[i];
    }

    cout << tot << "\n";
    return 0;
}