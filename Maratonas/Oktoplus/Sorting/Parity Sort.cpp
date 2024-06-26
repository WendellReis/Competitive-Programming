#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> v(n), aux(n);

        for(int i = 0; i < n; i++)
            cin >> v[i],aux[i]=v[i];
        sort(v.begin(),v.end());

        bool pass = true;
        for(int i = 0; i < n; i++)
            if(v[i]%2 != aux[i]%2) {
                pass = false;
                break;
            }

        if(pass) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}