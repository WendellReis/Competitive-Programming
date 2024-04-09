//Problem Link: https://olimpiada.ic.unicamp.br/pratique/pj/2010/f2/escada/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio();
    cin.tie(0);

    int n; cin >> n;

    int v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v,v+n);

    int count = 0, temp = v[0]+10;
    for(int i = 1; i < n; i++) {
        if(v[i] < temp)
            count+=(temp-v[i]);
        temp = v[i] + 10;

    }

    cout << 10*n - count << "\n";
    return 0;
}