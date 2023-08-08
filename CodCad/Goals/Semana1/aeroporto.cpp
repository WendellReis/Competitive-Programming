#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,v,x,y, t = 1; cin >> a >> v;
    while(a && v){
        int rotas[a+1] = {0};
        for(int i = 0; i < v; i++){
            cin >> x >> y;
            rotas[x]++;
            rotas[y]++;
        }

        int maior = rotas[1];
        for(int i = 2; i <= a; i++)
            maior = max(maior,rotas[i]);
    
        cout << "Teste " << t << "\n";
        for(int i = 1; i <= a; i++)
            if(rotas[i] == maior)
                cout << i << " ";
        cout << "\n\n";
        cin >> a >> v;
        t++;
    }
    return 0;
}