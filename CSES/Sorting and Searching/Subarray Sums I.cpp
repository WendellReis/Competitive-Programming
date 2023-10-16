/*
    Problem Name: Subarray Sums I
    Problem Link: https://cses.fi/problemset/task/1660
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x, count = 0; cin >> n >> x;
    
    int v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];

    long long sum = 0;
    for(int i = 0, j = 0; i < n; i++){
        if(sum < (long long)x)
            sum+=v[i];
        if(sum == (long long)x){
            count++;
            sum-=v[j];
            j++;
        } else{
            sum-=v[j];
            j++;
        }
        if(sum == (long long)x)
            count++;
    }

    cout << count << "\n";
    return 0;
}