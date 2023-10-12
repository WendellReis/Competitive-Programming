/*
Problem Name: Sum of Two Values
Problem Link: https://cses.fi/problemset/task/1640
Author: Wendell R. M. Matias
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k; cin >> n >> k;

    int v;
    set<pair<int,int>> s;
    vector<pair<int,int>> mid;
    for(int i = 0; i < n; i++){
        cin >> v;
        if((float)k/2 - v == 0.0)
            mid.push_back({v,i+1});
        else
            s.insert({v,i+1});
    }

    if(mid.size() > 1){
        cout << mid[0].second << " " << mid[1].second << "\n";
        return 0;
    }

    for(auto u : s){
        if(u.first > k/2)
            break;
        auto it = s.lower_bound({k - u.first,0});
        
        if(it != s.end()){
            cout << u.second << " " << (*it).second << "\n";
            return 0;
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}