#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, tot = 0; cin >> n;
    
    for(int i = 0,v; i < n; i++)
        cin >> v, tot+=v;
    cout << tot-n << "\n";
    return 0;
}