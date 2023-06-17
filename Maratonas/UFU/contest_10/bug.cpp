#include <bits/stdc++.h>

using namespace std;
#define REP(i,a,b) for(int i = a; i < b; i++)

int main(){
    int l, c; cin >> l >> c;
    
    int mat[l][c];
    REP(i,0,l) REP(j,0,c) cin >> mat[i][j];

    REP(i,0,c){
        REP(j,0,l) cout << mat[j][i] << " ";
        cout << "\n";
    } 
    return 0;
}