#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    while(n != -1) {
        int v, t, ant = 0, tot = 0;

        for(int i = 0; i < n; i++) {
            cin >> v >> t;
            tot = tot + v*(t - ant);
            ant = t;
        }
        cout << tot << " milhas\n";

        cin >> n;
    }
    return 0;
}