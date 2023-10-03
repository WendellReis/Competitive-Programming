/*
    CSES Problem Set
    https://cses.fi/problemset/task/1643
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector<long long> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    long long sum = v[0], max_sum = v[0];
    for(int i = 1; i < n; i++) {
        sum = max(v[i],sum+v[i]);
        max_sum = max(max_sum,sum);
    }

    cout << max_sum << '\n';
    return 0;
}