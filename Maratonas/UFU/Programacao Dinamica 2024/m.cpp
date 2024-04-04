#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k; cin >> n >> k;

    int v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    sort(v,v+n);

    int tot = 0, count = 0;
    while(true) {
        count++;
        tot+=v[n-1];
        if(tot >= k) {
            cout << count << "\n";
            return 0;
        }
        count++;
        tot+=v[n-2];
        if(tot >= k) {
            cout << count << "\n";
            return 0;
        }
    }

    return 0;
}