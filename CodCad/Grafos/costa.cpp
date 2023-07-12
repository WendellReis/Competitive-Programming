#include <bits/stdc++.h>
#define REP(i,a,b) for(int i = a; i < b; i++)

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    char mapa[n][m];

    REP(i,0,n) REP(j,0,m) 
        cin >> mapa[i][j];

    int quant = 0;
    REP(i,0,n) REP(j,0,m)
        if(mapa[i][j] == '#'){
            if(i-1 >= 0)
                if(mapa[i-1][j] == '.'){
                    mapa[i][j] == '*';
                    continue;
                }    

            if(i+1 < n)
                if(mapa[i+1][j] == '.'){
                    mapa[i][j] == '*';
                    continue;
                }

            if(j-1 >= 0)
                if(mapa[i][j-1] == '.'){
                    mapa[i][j] == '*';
                    continue;
                }    

            if(j+1 < m)
                if(mapa[i][j+1] == '.'){
                    mapa[i][j] == '*';
                    continue;
                }
        }
    
    cout << endl;
    REP(i,0,n){
        REP(j,0,m) 
            cout << mapa[i][j];
        cout << endl;
    } 
    return 0;
}