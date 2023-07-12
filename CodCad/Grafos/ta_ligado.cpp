#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    vector<vector<int>> pontes;
    for(int i = 0; i <= n; i++){
        vector<int> t;
        for(int j = 0; j <= n; j++)
            t.push_back(0);
        pontes.push_back(t);
    }

    int a,b,c;
    for(int i = 0; i < m; i++){
        cin >> a >> b >> c;
        if(a == 1){
            pontes[a][b] = 1;
            pontes[b][a] = 1;
        } else if(pontes[a][b] == 1)
            cout << "1\n";
        else 
            cout << "0\n";
    }

    return 0;
}