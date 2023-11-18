/*
    Problem Name: Tasks and Deadlines
    Problem Link: https://cses.fi/problemset/task/1630
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define F first
#define S second

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    vector<pair<int,int>> tasks(n);
    for(int i = 0; i < n; i++)
        cin >> tasks[i].F >> tasks[i].S;

    sort(tasks.begin(),tasks.end());
    ll time = 0, reward = 0;
    for(int i = 0; i < n; i++){
        time+=tasks[i].F;
        reward+=(tasks[i].S - time);
    }

    cout << reward << "\n";
    return 0;
}