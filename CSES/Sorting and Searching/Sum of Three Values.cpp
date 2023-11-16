/*
    Problem Name: Sum of Three Values
    Problem Link: https://cses.fi/problemset/task/1641
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x,v; cin >> n >> x;

    vector<pair<int,int>> values;
    for(int i = 0; i < n; i++){
        cin >> v;
        values.push_back({v,i+1});
    }

    sort(values.begin(),values.end());

    for(int k = 0; k < (int)values.size(); k++){
        int i = k+1, j = values.size()-1, sum;
        while(i < j){
            sum = values[i].F + values[j].F;
            if(sum < x - values[k].F)
                i++;
            else if(sum > x - values[k].F)
                j--;
            else {
                cout << values[k].S << " " << values[i].S << " " << values[j].S << "\n";
                return 0;
            }
        }
    }
    
    cout << "IMPOSSIBLE\n";
    return 0;
}