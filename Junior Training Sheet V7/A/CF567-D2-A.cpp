#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;

    int v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    for(int i = 0; i < n; i++) {
        if(i == 0)
            cout << abs(v[i+1]-v[i]) << " " << abs(v[n-1]-v[i]) << "\n";
        else if(i == n-1)
            cout << abs(v[i-1]-v[i]) << " " << abs(v[0]-v[i]) << "\n";
        else
            cout << min(abs(v[i-1]-v[i]),abs(v[i+1]-v[i])) << " " << max(abs(v[0]-v[i]),abs(v[n-1]-v[i])) << "\n";
    }
    return 0;
}