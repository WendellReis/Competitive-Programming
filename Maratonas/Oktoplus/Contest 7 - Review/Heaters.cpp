#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,r; cin >> n >> r;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int pos = 0, quant = 0;
    while(pos < n-1) {
        int i = pos + r - 1;
        while(i > pos) {

            i--;
        }
    }
    
    if(quant == 0)
        cout << "-1\n";
    else
        cout << quant << "\n";
    return 0;
}