#include <bits/stdc++.h>

#define F first 
#define S second
#define REP(i,a) for(int i = 0; i < a; i++)

using namespace std;

int main(){
    int n,m; cin >> n >> m;

    //Reading labyrinth
    vector<vector<int>> lab;
    string str;
    queue<pair<int,int>> q;
    REP(i,n){
        cin >> str;
        vector<int> ln;
        REP(j,m)
            if(str[j] == '#')
                ln.push_back(0);
            else if(str[j] == '.')
                ln.push_back(1);
            else if(str[j] == 'A'){
                ln.push_back(1);
                q.push({i,j});
            } else
                ln.push_back(-2);
        lab.push_back(ln);
    }
    
    //Finding the shortest path
    while(!q.empty()){
        pair<int,int> at = q.front(); q.pop();

        //visiting the current node and counting the distance 
        if(at.F + 1 < n) if(lab[at.F+1][at.S] == 1){
            lab[at.F+1][at.S] == lab[at.F][at.S] + 1;
            q.push({at.F+1,at.S});
        } else if(lab[at.F+1][at.S] == -2){
        
        }

        
    }

    return 0;
}