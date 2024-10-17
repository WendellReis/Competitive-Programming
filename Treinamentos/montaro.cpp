#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> a(n+2,0);
        for(int i = 1; i<= n; i++)
            cin >> a[i];
        
        int limi = 1000000001, limf = 0;
        for(int i = 1; i <= n; i++)
            if(a[i] != -1 && (a[i-1] == -1 || a[i+1] == -1))
                limi = min(limi,a[i]), limf = max(limf,a[i]);

        int k = (limf+limi)/2;
        int m = max(abs(k-limi),abs(limf-k));

        printf("%d %d\n",m,k);
    }

    return 0;
}