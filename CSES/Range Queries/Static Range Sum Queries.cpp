/*
    Problem Name: Static Range Sum Queries
    Problem Link: https://cses.fi/problemset/task/1646
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;

    long long v[n+1]; v[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        v[i]+=v[i-1];
    }
    
    int a,b;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        cout << v[b] - v[a-1] << "\n";
    }
    
    return 0;
}