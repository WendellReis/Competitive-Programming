#include <bits/stdc++.h>

using namespace std;
#define REP(i,a,b) for(int i = a; i < b; i++)


int main(){
    int T,N,E,B,i,j,r; 
    cin >> T;
    while(T > 0){
        cin >> N >> E;
        char map[N][N];
        REP(l,0,N) REP(c,0,N) map[l][c] = '.';

        REP(p,0,E){
            cin >> i >> j;
            map[i][j] = 'o';
        }

        cin >> B;
        REP(p,0,B){
            cin >> i >> j >> r;
            for(int k = j; k < N && k <= j+r;k++){
                
            }
        }
        T--;
    }
    return 0;
}