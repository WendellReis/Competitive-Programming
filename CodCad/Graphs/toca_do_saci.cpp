#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)
#define F first
#define S second
#define MK make_pair

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    
    int toca[n][m];
    queue<pair<int,int>> fila;
    REP(i,0,n) REP(j,0,m){
        cin >> toca[i][j];
        if(toca[i][j] == 3)
            fila.push(MK(i,j));
    }

    int dist;
    while(true){
        pair<int,int> atual = fila.front();
        fila.pop();
        if(atual.F + 1 < n){
            if(toca[atual.F + 1][atual.S] == 1){
                toca[atual.F+1][atual.S] = toca[atual.F][atual.S] + 1;
                fila.push(MK(atual.F+1,atual.S));
            } else if(toca[atual.F + 1][atual.S] == 2){
                dist = toca[atual.F][atual.S] - 1;
                break;
            }
        }

        if(atual.F - 1 >= 0){
            if(toca[atual.F - 1][atual.S] == 1){
                toca[atual.F-1][atual.S] = toca[atual.F][atual.S] + 1;
                fila.push(MK(atual.F-1,atual.S));
            } else if(toca[atual.F - 1][atual.S] == 2){
                dist = toca[atual.F][atual.S] - 1;
                break;
            }
        }

        if(atual.S + 1 < m){
            if(toca[atual.F][atual.S + 1] == 1){
                toca[atual.F][atual.S+1] = toca[atual.F][atual.S] + 1;
                fila.push(MK(atual.F,atual.S+1));
            } else if(toca[atual.F][atual.S + 1] == 2){
                dist = toca[atual.F][atual.S] - 1;
                break;
            }
        }

        if(atual.S - 1 >= 0){
            if(toca[atual.F][atual.S - 1] == 1){
                toca[atual.F][atual.S-1] = toca[atual.F][atual.S] + 1;
                fila.push(MK(atual.F,atual.S-1));
            } else if(toca[atual.F][atual.S - 1] == 2){
                dist = toca[atual.F][atual.S] - 1;
                break;
            }
        }
    }
    
    cout << dist << "\n";
    return 0;
}