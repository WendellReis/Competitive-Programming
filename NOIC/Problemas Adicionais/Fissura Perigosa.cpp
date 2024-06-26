#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,f; cin >> n >> f;

    vector<string> v(n);
    cin.ignore();
    for(int i = 0; i < n; i++)
        cin >> v[i];

    queue<pair<int,int>> q;
    if(v[0][0] - '0' <= f)
        q.push({0,0});
    while(!q.empty()) {
        pair<int,int> at = q.front(); q.pop();
        v[at.F][at.S] = '*';

        if(at.F-1 >= 0) if(v[at.F-1][at.S]-'0' <= f && v[at.F-1][at.S] != '*') q.push({at.F-1,at.S});
        if(at.F+1 < n) if(v[at.F+1][at.S]- '0' <= f && v[at.F+1][at.S] != '*') q.push({at.F+1,at.S});
        if(at.S-1 >= 0) if(v[at.F][at.S-1]-'0' <= f && v[at.F][at.S-1] != '*') q.push({at.F,at.S-1});
        if(at.S+1 < n) if(v[at.F][at.S+1] -'0' <= f && v[at.F][at.S+1] != '*') q.push({at.F,at.S+1});
    }

    for(int i = 0; i < n; i++)
        cout << v[i] << "\n";

    return 0;
}