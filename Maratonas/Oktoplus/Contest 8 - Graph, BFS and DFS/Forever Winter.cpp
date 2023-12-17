#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    
    while(t--) {
        int n,m; cin >> n >> m;

        vector<int> freq(n+1,0);
        int v;
        for(int i = 0; i < 2*m; i++) {
            cin >> v;
            freq[v]++;
        }

        int terminals = 0;
        for(int i = 1; i <= n; i++)
            if(freq[i] == 1)
                terminals++;

        //x = total - nos finais - raiz
        int x = n - terminals - 1;
        int y = terminals/x;
        
        cout << x << " " << y << "\n";
    }

    return 0;
}