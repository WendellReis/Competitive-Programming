#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,a,b,c; cin >> n >> m;
    set<int> pontes[n+1];

    for(int i = 0; i < m; i++){
        cin >> a >> b >> c;
        if(a){
            pontes[b].insert(c);
            pontes[c].insert(b);
        } else if(pontes[b].find(c) != pontes[b].end())
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}