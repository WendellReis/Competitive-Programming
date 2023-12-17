#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,s; cin >> n >> s;

    int a[n+1],b[n+1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i <= n; i++)
        cin >> b[i];
    
    if(a[1] == 0 || a[s] + b[s] == 0) {
        cout << "NO\n";
        return 0;
    }

    for(int i = 1; i <= n; i++)
        if(a[i] == 1) {
            if(i == s || (s < i && b[i])) {
                cout << "YES\n";
                return 0;
            }
        }

    cout << "NO\n";
    return 0;
}