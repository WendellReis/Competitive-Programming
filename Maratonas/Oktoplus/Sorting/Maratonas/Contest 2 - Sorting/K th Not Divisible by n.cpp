#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k;

        int quociente = k/(n-1);
        int resto = k%(n-1);

        if(resto == 0) cout << n*quociente - 1 << "\n";
        else cout << n*quociente + resto << "\n";
    }

    return 0;
}