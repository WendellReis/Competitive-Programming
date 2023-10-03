#include <bits/stdc++.h>

#define REP(i,a,b) for(int i = a; i <= b; i++)

using namespace std;

int main(){
    int n,m; cin >> n >> m;

    int mat[n+1][n+1],v1,v2;
    REP(i,1,n) REP(j,i+1,n) mat[i][j] = 0;

    REP(i,1,m){
        cin >> v1 >> v2;
        if(v1 < v2) mat[v1][v2] = 1;
        else mat[v2][v1] = 1;
    }

    vector<pair<int,int>> r;
    REP(i,1,n) REP(j,i+1,n)
        if(mat[i][j] == 0)
            r.push_back({i,j});

    cout << r.size() << "\n";
    REP(i,0,r.size()-1)
        cout << r[i].first << " " << r[i].second << "\n";

    return 0;
}