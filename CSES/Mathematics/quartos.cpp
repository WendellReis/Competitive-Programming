#include <bits/stdc++.h>

using namespace std;

#define l first
#define c second

int main() {
    int n,m; cin >> n >> m;

    cin.ignore();
    vector<string> matriz(n);
    for(int i = 0; i < n; i++)
        cin >> matriz[i];

    int quant = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matriz[i][j] == '.') {
                quant++;

                queue<pair<int,int>> f;
                f.push({i,j});
                matriz[i][j] = '#';
                
                while(!f.empty()) {
                    pair<int,int> atual = f.front();
                    f.pop();

                    if(atual.l - 1 >= 0 && matriz[atual.l-1][atual.c] == '.') {
                        matriz[atual.l-1][atual.c] = '#';
                        f.push({atual.l-1,atual.c});
                    }

                    if(atual.l + 1 < n && matriz[atual.l+1][atual.c] == '.') {
                        matriz[atual.l+1][atual.c] = '#';
                        f.push({atual.l+1,atual.c});
                    }

                    if(atual.c - 1 >= 0 && matriz[atual.l][atual.c-1] == '.') {
                        matriz[atual.l][atual.c-1] = '#';
                        f.push({atual.l,atual.c-1});
                    }

                    if(atual.c + 1 < m && matriz[atual.l][atual.c+1] == '.') {
                        matriz[atual.l][atual.c+1] = '#';
                        f.push({atual.l,atual.c+1});
                    }
                }
            }
        }
    }

    cout << quant << endl;

    return 0;
}