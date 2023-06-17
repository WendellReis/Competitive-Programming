#include <bits/stdc++.h>

using namespace std;
#define REP(i,a,b) for(int i = a; i < b; i++)

void change(char** map, int l, int c,int i, int j){
        if(i-1 >= 0) if(map[i-1][j] == 'A'){
            map[i-1][j] = 'T';
            change(map,l,c,i-1,j);
        }
        if(i+1 < l) if(map[i+1][j] == 'A'){
            map[i+1][j] = 'T';
            change(map,l,c,i+1,j);
        }
        if(j+1 < c) if(map[i][j+1] == 'A'){
            map[i][j+1] = 'T';
            change(map,l,c,i,j+1);
        } 
        if(j-1 >= 0) if(map[i][j-1] == 'A'){
            map[i][j-1] = 'T';  
            change(map,l,c,i,j-1);
        }             
} 

int main(){
    int l, c; cin >> l >> c;
    while(l != 0 && c != 0){
        char** map = new char*[l];
        REP(i,0,l) map[i] = new char[c];

        REP(i,0,l) REP(j,0,c) cin >> map[i][j];
        
        REP(i,0,l) REP(j,0,c) if(map[i][j] == 'T') change(map,l,c,i,j);
    
        REP(i,0,l){
            REP(j,0,c) cout << map[i][j];
            cout << "\n";
        } 
        cin >> l >> c;
    }
    cout << "\n";
    return 0;
}