/*
    Problem Name: Missing Coin Sum
    Problem Link: https://cses.fi/problemset/task/2183
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

int main(){
    int n; cin >> n;

    vector<ull> coins;
    ull v,at = 1;

    for(int i = 0; i < n; i++){
        cin >> v;
        coins.push_back(v);
    }

    sort(coins.begin(),coins.end());
    for(int i = 0; i < n; i++){
        if(at < coins[i]) break;
        at = at + coins[i];
    }
    cout << at << "\n";
    return 0;
}