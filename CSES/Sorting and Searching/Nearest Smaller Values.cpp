/*
    Problem Name: Nearest Smaller Values
    Problem Link: https://cses.fi/problemset/task/1645
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    stack<pair<int,int>> s; s.push({0,0});
    for(int i = 0; i < n; i++){
        while(s.top().first >= v[i])
            s.pop();
        cout << s.top().second << " ";
        s.push({v[i],i+1});
    }
    return 0;
}