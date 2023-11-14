#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,q; cin >> n >> q;

    vector<long long> prefix(n+1); prefix[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> prefix[i];
        prefix[i]+=prefix[i-1];
    }

    int a,b;
    for(int i = 0; i < q; i++){
        cin >> a >> b;
        cout << prefix[b] - prefix[a-1] << "\n";
    }
    return 0;
}