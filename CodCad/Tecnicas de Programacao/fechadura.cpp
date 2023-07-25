#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    int f[n];
    for(int i = 0; i < n; i++){
        cin >> f[i];
        f[i] = m - f[i];
    }
        
    int quant = 0, ini = 0, fim = n-1;
    while(ini < fim){
        quant+=abs(f[ini]);
        f[ini+1]-=f[ini];
        f[ini] = 0;

        quant+=abs(f[fim]);
        f[fim-1]-=f[fim];
        f[fim] = 0;

        ini++;
        fim--;
    }

    cout << quant << "\n";
    return 0;
}