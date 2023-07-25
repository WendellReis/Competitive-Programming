#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main(){
    int m,n; cin >> m >> n;

    int mapa[m][n];
    queue<pair<int,int>> fila;
    REP(i,0,m) REP(j,0,n){
        cin >> mapa[i][j];
        if(mapa[i][j] == 3)
            fila.push(make_pair(i,j));
    }
    
    int tot = 1;
    while(mapa[fila.front().first][fila.front().second] != 2){
        if(fila.front().first + 1 < m) if(mapa[fila.front().first+1][fila.front().second] == 1){
            fila.push(make_pair(fila.front().first+1,fila.front().second));
            mapa[fila.front().first+1][fila.front().second] = 0;
        }    

        if(fila.front().first - 1 >= 0) if(mapa[fila.front().first-1][fila.front().second] == 1){
            fila.push(make_pair(fila.front().first-1,fila.front().second));
            mapa[fila.front().first-1][fila.front().second] = 0;
        }

        if(fila.front().second + 1 < n) if(mapa[fila.front().first][fila.front().second+1] == 1){
            fila.push(make_pair(fila.front().first,fila.front().second+1));
            mapa[fila.front().first][fila.front().second+1] = 0;
        }
        
        if(fila.front().second - 1 >= 0) if(mapa[fila.front().first][fila.front().second-1] == 1){
            fila.push(make_pair(fila.front().first,fila.front().second-1));
            mapa[fila.front().first][fila.front().second-1] = 0;
        }
            
        tot++;
        fila.pop();
    }

    cout << tot << "\n";
    return 0;
}