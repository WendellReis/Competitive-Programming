#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,t,a,b; cin >> n >> m;

    int pontes[n+1][n+1];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            pontes[i][j] = 0;


    for(int i = 0; i < m; i++){
        cin >> t >> a >> b;
        if(t == 1){
            pontes[a][b]=1;
            pontes[b][a]=1;
            continue;
        } 

        if(pontes[a][b] == 1)
            cout << "1\n";
        else
            cout << "0\n";  
    }  
    return 0;
}