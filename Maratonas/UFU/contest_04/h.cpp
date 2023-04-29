#include <bits/stdc++.h>

using namespace std;

long long fat(int k){
    if(k < 2) return 1;
    return k*fat(k-1); 
}

int main(){
    int n;
    cin >> n;
    int cont = (0.63*n)*0.8;
    int recrutas = cont*0.2;
    int cabos = (cont - recrutas)*0.3;
    int soldados = (cont - recrutas - cabos)*0.45;
    int sargentos = cont - recrutas - cabos - soldados;
    cout << "[" << (int)(0.63*n) << "," << cont << "," << 
    fat(recrutas+cabos+soldados+sargentos)/fat(recrutas/fat(cabos)/fat(soldados)/fat(sargentos)) << "]" << endl;
    return 0;
}