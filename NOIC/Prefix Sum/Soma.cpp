/*
    Problem Name: Soma
    Problem Link: https://olimpiada.ic.unicamp.br/pratique/p2/2019/f1/soma/
    Author: Wendell R. M. Matias
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k; cin >> n >> k;

    vector<int> v(n+1); v[0] = 0;
    for(int i = 1; i <= n; i++)
        cin >> v[i];
    
    int count = 0, sum = 0;
    for(int i = 1, j = 0; i <= n; i++){
        if(sum + v[i] == k){
            count++;
            sum+=v[i];
        } else if(sum + v[i] > k){
            sum-=v[j];
            j++;
            i--;
            if(i < j)
                i++;
        } else
            sum+=v[i];
    }
    cout << count << "\n";
    return 0;
}
