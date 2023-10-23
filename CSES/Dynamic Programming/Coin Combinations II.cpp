/*
    Problem Name: Coin Combinations I
    Problem Link: https://cses.fi/problemset/task/1635
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k; cin >> n >> k;

    vector<int> coins(n);
    for(int i = 0; i < n; i++)
        cin >> coins[i];
    
    vector<int> count(k+1,0);
    set<pair<int,int>> last[k+1];
    vector<int> ant(k+1,0);
    count[0] = 1;
    last[0].insert({0,1});
    for(int x = 1; x <= k; x++)
        for(auto c : coins){
            if(x - c >= 0){
                auto it = last[x-c].upper_bound({c+1,0});
                if(it != last[x-c].begin()){
                    it--;
                }
            }
        }

    cout << count[k] << "\n";
    return 0;
}