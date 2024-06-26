#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool verifySums(vector<int> v, int k, ll s) {
    int q = 1;
    ll sum = 0;

    for(int i = 0; i < v.size(); i++) {
        if(v[i] > s) return false;
        sum+=v[i];
        if(sum > s) {
            q++;
            sum = v[i];
        }
    }
    
    if(q <= k) return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,k; cin >> n >> k;
    vector<int> v(n);
    ll l = pow(10,9), h = 0;
    for(int i = 0; i < n; i++)
        cin >> v[i], l = min(l,(ll)v[i]), h+=v[i];

    while(l < h) {
        ll mid = (l+h)/2;

        if(verifySums(v,k,mid))
            h = mid;
        else
            l = mid+1;
    }

    cout << h << "\n";
    return 0;
}