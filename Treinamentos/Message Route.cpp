#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,a,b; cin >> n >> m;
    vector<set<int>> v(n+1);

    for (int i = 0; i < m; i++){
        cin >> a >> b;
        v[a].insert(b);
        v[b].insert(a);
    }
    
    set<int> vis;
    queue<int> q; q.push(n);

    while (!q.empty()){
        n = q.front();
        q.pop();
        vis.insert(n);
        if(n==1)
            break;
        for (auto i : v[n]){
            if(i==1){
                vis.insert(1);
                break;
            }
            if(vis.find(i)==vis.end()){
                q.push(i);
            }
        }
    }

    if(vis.size()&&*vis.begin()==1) {
        cout << vis.size() << '\n';
        for(auto i : vis)
            cout << i << ' ';
        cout << '\n';
    }
    else
        cout << "IMPOSSIBLE\n";

    return 0;
}