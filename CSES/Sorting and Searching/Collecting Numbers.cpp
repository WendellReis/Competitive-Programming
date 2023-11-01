/*
    Problem Name: Collecting Numbers
    Problem Link: https://cses.fi/problemset/task/2216
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector<int> v(n), idx(n+1);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        idx[v[i]] = i;
    }

    int count = 1;
    for(int i = 1; i <= n; i++)
        if(idx[i] < idx[i-1])
            count++;
            
    cout << count << "\n";
    return 0;
}