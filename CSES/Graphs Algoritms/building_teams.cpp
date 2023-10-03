#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;

    vector<int> adj[n+1];
    int v1,v2;
    for(int i = 0; i < m; i++){
        cin >> v1 >> v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }

    int team[n+1] = {0}; //0 -> no team, 1 -> team 1, 2 -> team 2
    
    for(int i = 1; i <= n; i++)
        if(team[i] == 0){
            queue<int> q;
            q.push(i);
            team[i] = 1; //supposing a team
            
            while(!q.empty()){
                int at = q.front(); q.pop();

                for(auto u : adj[at]){
                    if(team[u] == 0){
                        if(team[at] == 1) team[u] = 2;
                        else team[u] = 1;
                        q.push(u);
                    } else if(team[u] == team[at]){
                        cout << "IMPOSSIBLE\n";
                        return 0;
                    }
                }
            }

        }
    for(int i = 1; i <= n; i++)
        cout << team[i] << " ";
    cout << "\n";

    return 0;
}