#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
 
    ll x; cin >> x;
    vector<ll> prefix(n+1); prefix[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> prefix[i];
        prefix[i]+=prefix[i-1];
    }
        
    int count = 0;
    for(int i = 1, j = 1; i <= n;){
        int p = prefix[i] - prefix[j-1];
        if(p <= x){
            if(p == x)
                count++;
            i++;
        }
        else {
            j++;
            if(j > i)
                i++;
        }
    }
    cout << count << "\n";
    return 0;
}