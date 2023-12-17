#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;

    vector<int> v(n+1);
    for(int i = 1; i <= n; i++)
        cin >> v[i];

    for(int i = 1; i <= n; i++)
        if(v[v[v[i]]] == i) {
            cout << "YES\n";
            return 0;
        }
            
    cout << "NO\n";
    return 0;
}
