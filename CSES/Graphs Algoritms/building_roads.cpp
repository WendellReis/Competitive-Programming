#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;

    vector<int> adj[n+1], nodes;
    int a,b;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int visited[n+1] = {0};
    for(int i = 1; i <= n; i++)
        if(visited[i] == 0){
            nodes.push_back(i);
            stack<int> s;
            s.push(i);

            while(!s.empty()){
                int at = s.top(); s.pop();
                visited[at] = 1;

                for(auto v : adj[at])
                    if(visited[v] == 0)
                        s.push(v);
            }
        }

    cout << nodes.size()-1 << "\n";

    for(int i = 1; i < nodes.size(); i++)
        cout << nodes[0] << " " << nodes[i] << "\n";
    return 0;
}