#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    int v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << "\n";
    
    int pos; cin >> pos;
    while(pos != -1) {
        int val; cin >> val;
        v[pos] = val;
        for(int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << "\n";
        cin >> pos;
    }

    return 0;
}