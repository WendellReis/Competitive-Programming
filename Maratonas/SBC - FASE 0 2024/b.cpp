#include <bits/stdc++.h>

using namespace std;

#define par pair<int,int>
#define F first
#define S second

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    priority_queue<par, vector<par>, greater<par>> q;
    int n,m,k; cin >> n >> m >> k;

    vector<int> visited(n+1,0);
    vector<vector<par>> adj(n+1);

    for(int i = 0; i < m; i++) {
        int u,v,c; cin >> u >> v >> c;
        adj[v].push_back({u,c});
        adj[u].push_back({v,c});
    }

    int tempo = 0;
    q.push({0,1});
    while(k--) {
        par at = q.top();q.pop();
        if(visited[at.S]) {
            k++;
            continue;
        }
        visited[at.S] = 1;
        tempo = max(tempo,at.F);

        //printf("at = %d tempo = %d\n",at.S,at.F);
        
        for(auto i : adj[at.S])
            if(!visited[i.F])
                q.push({i.S,i.F});
    }

    cout << tempo << "\n";
    return 0;
}