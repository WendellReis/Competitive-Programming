#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define S second

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,k; cin >> n >> k;

    vector<ll> prefix(n+1,0);
    for(int i = 1; i <= n; i++)
        cin >> prefix[i], prefix[i]+=prefix[i-1];
    
    map<ll, int> freq; freq[0] = 1;
    ll tot = 0;
    for(int i = 1; i <= n; i++) {
        auto it = freq.find(prefix[i]-k);
        if(it != freq.end())
            tot+=it->S;
        
        it = freq.find(prefix[i]);
        if(it != freq.end())
            it->S++;
        else freq[prefix[i]] = 1;
    }

    cout << tot << "\n";
    return 0;
}