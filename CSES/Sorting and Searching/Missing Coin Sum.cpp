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

    for(int i = 0; i < n; i++)
        cout << coins[i] << " ";
    cout << "\n";
    return 0;
}