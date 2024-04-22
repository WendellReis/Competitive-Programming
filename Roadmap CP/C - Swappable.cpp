//Problem Link: https://atcoder.jp/contests/abc206/tasks/abc206_c

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;

    int v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];

    map<int,int> freq;
    long long sum = 0;

    for(int i = n-1; i >= 0; i--) {
        auto it = freq.find(v[i]);

        if(it == freq.end()) {
            sum+=(n-1 - i);
            freq[v[i]] = 1;
        } else {
            sum+=(n-1 - i - freq[v[i]]);
            freq[v[i]]++;
        }
    }

    cout << sum << "\n";
    return 0;
}