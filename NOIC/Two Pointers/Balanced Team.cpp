/*
    Problem Name: Balanced Team
    Problem Link: https://codeforces.com/problemset/problem/1133/C
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x; cin >> n;

    vector<int> v;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());
    int count = 0, max_count = 1, l = 0, r = 0;
    while(r < n){
        if(v[r] - v[l] <= 5){
            count++;
            r++;
        } else{
            max_count = max(max_count,count);
            l++;
            count--;
        }
            
    }
    cout << max(max_count,count) << "\n";
    return 0;
}