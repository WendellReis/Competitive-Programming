#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k; cin >> n >> k;

    for(int i = 0; i < n; i++)
        cout << (char)('a'+(i%k));
    cout << '\n';
    
    return 0;
}