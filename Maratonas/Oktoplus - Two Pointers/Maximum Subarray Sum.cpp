#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int n; cin >> n;

    vector<ll> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    ll sum_max = v[0], sum = v[0];
    for(int i = 1; i < n; i++){
        sum = max(sum+v[i],v[i]);
        sum_max = max(sum_max,sum);
    }

    cout << sum_max << "\n";
    return 0;
}