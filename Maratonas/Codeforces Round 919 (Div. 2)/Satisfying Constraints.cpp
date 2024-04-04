#include <bits/stdc++.h>

using namespace std;

#define INF INT32_MAX

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int lmin = -INF, lmax = INF;
        vector<int> eq;

        int a,x,n; cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> a >> x;
            
            if(a == 1) lmin = max(lmin,x);
            else if(a == 2) lmax = min(lmax,x);
            else eq.push_back(x);
        }

        if(lmin > lmax) cout << "0\n";
        else {
            int tot = lmax - lmin + 1;
            for(int i = 0; i < eq.size(); i++)
                if(eq[i] >= lmin && eq[i] <= lmax)
                    tot--;

            cout << tot << '\n';
        }
    }
    
    return 0;
}