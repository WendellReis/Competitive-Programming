//Problem Link: https://neps.academy/br/exercise/309

#include <bits/stdc++.h>

using namespace std;

int find(int x, vector<int>& pai) {
    if(pai[x] == x)
        return x;
    return pai[x] = find(pai[x],pai);
}

int join(int x, int y, vector<int>& pai) {
    pai[find(x,pai)] = find(y,pai);
}

int main() {
    int n,m; cin >> n >> m;

    vector<int> pai(n+1);
    for(int i = 1; i <= n; i++)
        pai[i] = i;
    
    for(int i = 0,x,y; i < m; i++) {
        cin >> x >> y;
        join(x,y,pai);
    }

    set<int> s;
    for(int i = 1; i <= n; i++)
        s.insert(find(i,pai));
    
    cout << s.size() << "\n";
    return 0;
}