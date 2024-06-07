#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a,b,c; cin >> a >> b >> c;
    int v[4] = {0}; v[a] = 1, v[b] = 1; v[c] = 1;

    for(int i = 1; i <= 3; i++)
        if(v[i] == 0) {
            cout << i << "\n";
            return 0;
        }
    return 0;
}