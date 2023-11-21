/*
    Problem Name: Subarray Divisibility
    Problem Link: https://cses.fi/problemset/task/1662/
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;

    vector<int> v(n+1); v[0] = 0;
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        v[i] = (v[i] + v[i-1])%n;
        if(v[i] < 0)
            v[i]+=n;
    }

    ll count = 0;
    vector<int> freq(n,0); freq[0] = 1;
    for(int i = 1; i <= n; i++) {
        if(freq[v[i]] != 0)
            count+=freq[v[i]];
        freq[v[i]]++;
    }
    
    cout << count << "\n";
    return 0;
}