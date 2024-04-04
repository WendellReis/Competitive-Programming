#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

int main() {
    int n,m; cin >> n >> m;

    while(!(n == 0 && m == 0)) {
        char cav[n][m];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> cav[i][j];

        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(cav[i][j] == 'T') {
                    queue<pair<int,int>> q; q.push({i,j});

                    while(!q.empty()) {
                        pair<int,int> at = q.front();
                        cav[at.F][at.S] = 'T';
                        q.pop();

                        if(at.F + 1 < n) {
                            if(cav[at.F+1][at.S] == 'A')
                                q.push({at.F+1,at.S});
                        }
                        if(at.F - 1 >= 0) {
                            if(cav[at.F-1][at.S] == 'A')
                                q.push({at.F-1,at.S});
                        }
                        if(at.S + 1 < m) {
                            if(cav[at.F][at.S+1] == 'A')
                                q.push({at.F,at.S+1});
                        }
                        if(at.S - 1 >= 0) {
                            if(cav[at.F][at.S-1] == 'A')
                                q.push({at.F,at.S-1});
                        }
                    }
                }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++)
                cout << cav[i][j];
            cout << '\n';
        }
        cin >> n >> m;
    }

    return 0;
}