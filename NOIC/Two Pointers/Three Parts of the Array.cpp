#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int n; cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0, r = n-1;
    ll sum = 0, sum1 = v[0], sum2 = v[n-1];
    while(l < r){
        if(sum1 < sum2){
            l++;
            sum1+=v[l];
        } else if(sum2 < sum1){
            r--;
            sum2+=v[r];
        } else{
            sum = sum1;
            r--;
            l++;
            sum1+=v[l];
            sum2+=v[r];
        }
    }

    cout << sum << "\n";
    return 0;
}