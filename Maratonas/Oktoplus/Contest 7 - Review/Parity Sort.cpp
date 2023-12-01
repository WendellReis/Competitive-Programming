#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> v1(n);
        for(int i = 0; i < n; i++)
            cin >> v1[i];
        
        vector<int> v2 = v1;
        sort(v1.begin(),v1.end());

        bool pass = true;
        for(int i = 0; i < n; i++)
            if((v1[i] + v2[i])%2 == 1) {
                pass = false;
                break;
            }

        if(pass) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}