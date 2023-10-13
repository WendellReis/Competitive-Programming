/*
    Problem Name: Missing Coin Sum
    Problem Link: https://cses.fi/problemset/task/2183
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

int main(){
    ull n,v; cin >> n;

    vector<ull> coins;
    for(int i = 0; i < n; i++){
        cin >> v;
        coins.push_back(v);
    }

    sort(coins.begin(),coins.end());
    unordered_set<ull> sum;
    vector<ull> pos; pos.push_back(0);
    ull atual = 1, j = 0;
    while(true){
        if(j == n)
            break;
        if(coins[j] == atual){
            sum.insert(atual);
            pos.push_back(j);
            atual++;
        } else if(coins[j] > atual)
            break;
        else{
            auto it = sum.find(atual-coins[j]);
            if(it != sum.end()){
                if(pos[(*it)] == j)
                    j++;
                else{
                    sum.insert(atual);
                    pos.push_back(j);
                    atual++;
                }
            } else
                j++;
        }
    }
    cout << atual << "\n";
    return 0;
}