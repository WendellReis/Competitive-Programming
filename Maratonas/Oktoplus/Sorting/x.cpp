#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--) {
        int n,m; cin >> n >> m;

        vector<vector<int>> mat(n,vector<int>(m));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> mat[i][j];
        
        vector<vector<long long>> diag1(n,vector<long long>(m,0)),diag2(n,vector<long long>(m,0));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++) {
                diag1[i-min(i,j)][j-min(i,j)]+=mat[i][j];
                int dist = min(i,m-1-j);
                diag2[i-dist][j-dist]+=mat[i][j];
            }

        long long maximo = 0;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                maximo = max(maximo,diag1[i-min(i,j)][j-min(i,j)] - mat[i][j]);

        cout << maximo << "\n";
    }

    return 0;
}