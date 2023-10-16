/*
    Problem Name: Dice Combinations
    Problem Link: https://cses.fi/problemset/task/1633
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

int const INF = 1000001;

int main(){
    int n,k,v; cin >> n >> k;
    
    vector<int> coins;
    for(int i = 0; i < n; i++){
        cin >> v;
        if(v <= k)
            coins.push_back(v);
    }

    int value[k]; value[0] = 0;
    for(int x = 1; x <= k; x++){
        value[x] = INF;
        for(auto c : coins){
            if(x - c >= 0)
                value[x] = min(value[x],value[x-c]+1);
        }
    }
    if(value[k] == INF) cout << "-1\n";
    else cout << value[k] << "\n";
    return 0;
}