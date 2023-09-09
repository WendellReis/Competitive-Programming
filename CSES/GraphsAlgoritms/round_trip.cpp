#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;

    vector<int> adj[n+1];
    int v1,v2;
    for(int i = 0; i < m; i++){
        cin >> v1 >> v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }


    return 0;
}