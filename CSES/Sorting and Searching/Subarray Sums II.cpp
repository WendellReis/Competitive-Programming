/*
    Problem Name: Subarray Sums II
    Problem Link: https://cses.fi/problemset/task/1661/
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x; cin >> n >> x;
    
    vector<ll> prefix(n+1); prefix[0] = 0;
    for(int i = 1; i <= n; i++) {
        cin >> prefix[i];
        prefix[i]+=prefix[i-1];
    }

    ll count = 0;
    set<ll> s; s.insert(0);
    map<ll,ll> freq; freq[0] = 1;
    for(int i = 1; i <= n; i++){
        if(s.find(prefix[i] - x) != s.end())
            count+=freq[prefix[i] - x];
        
        if(s.find(prefix[i]) == s.end()) {
            s.insert(prefix[i]);
            freq[prefix[i]] = 1;
        } else
            freq[prefix[i]]++;
    }
    cout << count << "\n";
    return 0;
}