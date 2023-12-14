#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,v; cin >> n;
    
    int camp[n+2] = {0};
    for(int i = 1; i <= n; i++) {
        cin >> v;
        if(v == 1)
            camp[i-1]++,camp[i]++,camp[i+1]++;
    }
    
    for(int i = 1; i <= n; i++)
        cout << camp[i] << "\n";
    return 0;
}