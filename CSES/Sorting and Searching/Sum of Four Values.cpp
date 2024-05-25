/*
    Problem Name: Sum of Four Values
    Problem Link: https://cses.fi/problemset/task/1642/
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,x,v; cin >> n >> x;

    vector<pair<int,int>> values;
    for(int i = 1; i <= n; i++){
        cin >> v;
        if(v < x-2)
            values.push_back({v,i});
    }

    sort(values.begin(),values.end());
    for(int i = 0; i < (int)values.size(); i++)
        for(int j = i+1; j < (int)values.size(); j++){
            int sum = values[i].F + values[j].F;
            int l = j+1, r = values.size()-1;
            
            while(l < r){
                int tot = sum + values[l].F + values[r].F;
                if(tot < x)
                    l++;
                else if(tot > x)
                    r--;
                else{
                    cout << values[i].S << " " << values[j].S << " " << values[l].S << " " << values[r].S << "\n";
                    return 0;
                }
            }
        }

    cout << "IMPOSSIBLE\n";
    return 0;
}