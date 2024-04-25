//Problem Link: https://neps.academy/br/exercise/2072

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    int n; cin >> n;

    ll s; cin >> s;
    vector<ll> prefix(n+1,0);

    for(int i = 1; i <= n; i++) {
        cin >> prefix[i];
        prefix[i]+=prefix[i-1];
    }

    int q = 0;
    map<ll,int> freq; freq[0] = 1;
    for(int i = 1; i <= n; i++) {
        auto it = freq.find(prefix[i]-s);

        if(it != freq.end())
            q = q + it->second;

        auto it2 = freq.find(prefix[i]);
        if(it2 == freq.end())
            freq[prefix[i]] = 1;
        else
            freq[prefix[i]]++;
    }

    cout << q << '\n';
    return 0;
}
