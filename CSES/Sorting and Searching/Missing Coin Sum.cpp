/*
    CSES Problem Set
    https://cses.fi/problemset/task/2183
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,v; cin >> n;

    vector<int> coins;
    for(int i = 0; i < n; i++){
        cin >> v;
        coins.push_back(v);
    }

    sort(coins.begin(),coins.end());
    set<long long> sum;
    vector<int> idx;
    idx.push_back(0);
    int j = 0;
    for(long long i = 1; true; i++){
        if(j == n){
            cout << i << "\n";
            return 0;
        }
        if(coins[j] == i){
            sum.insert(i);
            idx.push_back(j);
            j++;
        } else if(coins[j] > i){
            cout << i << "\n";
            return 0;
        } else{
            auto r = sum.find(i-coins[j]);
            if(r == sum.end()){
                cout << i << "\n";
                return 0;
            } else if(idx[*r] == j)
                j++;
            else{
                sum.insert(i);
                idx[i] = j;
            }
        }
    }
    return 0;
}