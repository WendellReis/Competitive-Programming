#include <bits/stdc++.h>

using namespace std;

int main(){
    long long Vt, Tr; cin >> Vt;
    while(Vt != 0){
        cin >> Tr;
        cout << (int)(sqrt(4-Tr+Vt) - 2) << "\n"; //Resultado da eq. de segundo grau
        cin >> Vt;
    }
    return 0;
}