#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m; cin >> n >> m;

    vector<int> adj[n+1];
    int a,b;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> teams(n+1,0);
    stack<int> s;

    for(int i = 1; i <= n; i++) {
        if(teams[i] == 0) {
            teams[i] = 1;
            s.push(i);

            while(!s.empty()) {
                int at = s.top();
                s.pop();

                for(auto u : adj[at]) {
                    if(teams[u] == 0) {
                        teams[u] = 1 + teams[at]%2;
                        s.push(u);
                    } else if(teams[u] == teams[at]) {
                        cout << "IMPOSSIBLE\n";
                        return 0;
                    }
                }
            }
        }
    }
    
    for(int i = 1; i <= n; i++)
        cout << teams[i] << " ";
    cout << "\n";
    return 0;
}