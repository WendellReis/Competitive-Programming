#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector<long long> coins(n);
    for(int i = 0; i < n; i++)
        cin >> coins[i];

    long long sum = 1;
    sort(coins.begin(),coins.end());

    for(int i = 0; i < n; i++)
        if(coins[i] <= sum)
            sum+=coins[i];
    cout << sum << "\n";
    return 0;
}