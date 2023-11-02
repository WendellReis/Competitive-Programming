/*
    Problem Name: Hottest
    Problem Link: https://wcipeg.com/problem/ioi1102
    Author: Wendell R. M. Matias
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k; cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    long long max_temp = 0, sum = 0;
    for(int i = 0; i < n && i < k; i++)
        sum+=v[i];

    max_temp = sum;
    for(int i = k; i < n; i++){
        sum = sum - v[i-k] + v[k];
        max_temp = max(max_temp,sum);
    }

    cout << max_temp << "\n";
    return 0;
}