/*
    Problem Name: Coin Combinations I
    Problem Link: https://cses.fi/problemset/task/1635
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

const int MD = 1000000007;

int main(){
    int n,k; cin >> n >> k;

    vector<int> coins(n);
    for(int i = 0; i < n; i++)
        cin >> coins[i];
    
    vector<int> count(k+1,0); 
    count[0] = 1;
    for(int x = 1; x <= k; x++)
        for(auto c : coins){
            if(x - c >= 0){
                count[x]+=count[x-c];
                if(count[x] >= MD)
                    count[x]-=MD;
            }
        }

    cout << count[k] << "\n";
    return 0;
}