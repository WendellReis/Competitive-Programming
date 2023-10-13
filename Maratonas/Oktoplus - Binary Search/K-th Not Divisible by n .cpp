/*
Problem Name: K-th Not Divisible by n
Problem Link: https://codeforces.com/problemset/problem/1352/C
Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,k; cin >> n >> k;
        cout << n * (int)k/(n-1) - n + 1 + k%(n-1) << "\n";
    }

    return 0;
}