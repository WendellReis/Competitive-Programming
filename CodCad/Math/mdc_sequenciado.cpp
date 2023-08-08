#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    int vet[n];
    for(int i = 0; i < n; i++)
        cin >> vet[i];
    
    int mdc = 1, d = 2;
    while(true){
        bool s = true;
        for(int i = 0; i < n; i++) //verificando se o divisor é válido
            if(d > vet[i]){
                s = false;
                break;
            }
        if(!s) break;

        for(int i = 0; i < n; i++)
            if(vet[i]%d != 0){
                s = false;
                break;
            }
      
        if(s){
            for(int i = 0; i < n; i++)
                vet[i]/=d;
            mdc*=d;
        }
        else d++;
    }

    cout << mdc << endl;
    return 0;
}