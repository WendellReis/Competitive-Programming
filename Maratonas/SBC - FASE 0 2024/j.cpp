#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m,k,l; cin >> n >> m >> k >> l;

    cin.ignore();
    vector<string> v(n);
    vector<vector<int>> freq(n,vector<int>(m,0));
    for(int i = 0; i < m; i++)
        cin >> v[i];
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(v[i][j] == '*') {
                int aux = min(k,l);
                k = max(k,l);
                l = aux;

                if(l == 1) {
                    if(i+(k-1) < n)
                        if(v[i+k-1][j] == '*')
                            freq[i+k-1][j]++;
                    if(i-(k-1) >= 0)
                        if(v[i-(k-1)][j] == '*')
                            freq[i-(k-1)][j]++;
                    if(j+(k-1) < m)
                        if(v[i][j+(k-1)] == '*')
                            freq[i][j+(k-1)]++;
                    if(j-(k-1) >= 0)
                        if(v[i][j-(k-1)] == '*')
                            freq[i][j-(k-1)]++;
                }
            }
    int q = freq[0][0],x = 1,y = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << freq[i][j] << "(" << q << ")";
            if(freq[i][j] > q && v[i][j] != '*') {
                x = i+1;
                y = j+1;
                q = freq[i][j];
            }
        }
        cout << endl;
    }
    cout << x << " " << y << "\n";

    return 0;
}