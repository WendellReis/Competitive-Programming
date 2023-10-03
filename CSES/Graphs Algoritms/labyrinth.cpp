#include <bits/stdc++.h>

#define F first
#define S second
#define REP(i,a) for(int i = 0; i < a; i++)

using namespace std;

int main(){
    int n,m; cin >> n >> m;

    string s;
    int lab[n][m];
    queue<pair<int,int>> q;
    pair<int,int> f;
    REP(i,n) {
        cin >> s;
        REP(j,m){
            if(s[j] == '#')
                lab[i][j] = 0;
            else if(s[j] == '.')
                lab[i][j] = -1;
            else if(s[j] == 'A'){
                lab[i][j] = 1;
                q.push({i,j});
            } else{
                lab[i][j] = -2;
                f = {i,j};
            }
        }
    }

    int sz = 0;
    while(!q.empty()){
        pair<int,int> at = q.front(); q.pop();

        if(at.F+1 < n){
            if(lab[at.F+1][at.S] == -1){
                lab[at.F+1][at.S] = lab[at.F][at.S]+1;
                q.push({at.F+1,at.S});
            } else if(lab[at.F+1][at.S] == -2){
                sz = lab[at.F][at.S];
                break;
            }
        }

        if(at.F-1 >= 0){
            if(lab[at.F-1][at.S] == -1){
                lab[at.F-1][at.S] = lab[at.F][at.S]+1;
                q.push({at.F-1,at.S});
            } else if(lab[at.F-1][at.S] == -2){
                sz = lab[at.F][at.S];
                break;
            }
        }
        

        if(at.S+1 < m){
            if(lab[at.F][at.S+1] == -1){
                lab[at.F][at.S+1] = lab[at.F][at.S]+1;
                q.push({at.F,at.S+1});
            }else if(lab[at.F][at.S+1] == -2){
                sz = lab[at.F][at.S];
                break;
            }
        }

        if(at.S-1 >= 0){
            if(lab[at.F][at.S-1] == -1){
                lab[at.F][at.S-1] = lab[at.F][at.S]+1;
                q.push({at.F,at.S-1});
            } else if(lab[at.F][at.S-1] == -2){
                sz = lab[at.F][at.S];
                break;
            }
        }
    }
    
    if(sz == 0)
        cout << "NO\n";
    else{
        cout << "YES\n" << sz << "\n";
        string path="";
        
        while(sz != 0){
            if(f.F+1 < n) if(lab[f.F+1][f.S] == sz){
                path+="U";
                f = {f.F+1,f.S};
                sz--;
                continue;
            }

            if(f.F-1 >= 0) if(lab[f.F-1][f.S] == sz){
                path+="D";
                f = {f.F-1,f.S};
                sz--;
                continue;
            }

            if(f.S+1 < m) if(lab[f.F][f.S+1] == sz){
                path+="L";
                f = {f.F,f.S+1};
                sz--;
                continue;
            }

            if(f.S-1 >= 0) if(lab[f.F][f.S-1] == sz){
                path+="R";
                f = {f.F,f.S-1};
                sz--;
            }
        }
        for(int i = path.size() - 1; i >= 0; i--)
            cout << path[i];
        cout << "\n";
    }
    return 0;
}