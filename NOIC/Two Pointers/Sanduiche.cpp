/*
    Problem Name: Sanduiche
    Problem Link: https://neps.academy/br/exercise/60
    Author: Wendell R. M. Matias
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x; cin >> n >> x;

    vector<int> v(2*n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        v[n+i] = v[i];
    }

    int l = 0, r = 0, sum = v[0], count = 0;
    while(l <= n-1){
        if(r - l > n){
            sum-=v[l];
            l++;
        } else if(sum < x){
            r++;
            sum+=v[r];
        } else if(sum > x){
            sum-=v[l];
            l++;
        } else{
            count++;
            sum-=v[l];
            r++;
            sum+=v[r];
            l++;
        }
    }

    cout << count << "\n";
    return 0;
}