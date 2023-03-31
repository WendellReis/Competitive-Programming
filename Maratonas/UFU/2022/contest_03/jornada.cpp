#include <bits/stdc++.h>

using namespace std;

int mmc(int *v, int tam);

int main(){
    int v[3];
    while(cin >> v[0] >> v[1] >> v[2])
        cout << mmc(v,3) << endl;
    return 0;
}


int mmc(int *v, int tam){
    int d = 2, mmc = 1;
    bool fim, div;
    while(true){
    fim = true;
    div = false;
        for(int i = 0; i < tam; i++)
            if(v[i] != 1) fim = false;
        if(fim) return mmc;
        for(int i = 0; i < tam; i++)
            if(v[i]%d == 0){
                v[i]/=d;
                div = true;
            }
        if(div) mmc*=d;
        else d++;
    }
}