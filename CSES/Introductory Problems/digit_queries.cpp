#include <bits/stdc++.h>
#define ll unsigned long long

using namespace std;

int main(){
    int q;
    ll k;
    cin >> q;
    while(q > 0){
        cin >> k;
        if(k < 10){
            cout << k << "\n";
            q--;
            continue;
        }
        //cout << "ki = " << k << endl;
        int casas = 1;
        for(int i = 0; k - 9*pow(10,i)*(i+1) > 0; i++){
            k -= 9*pow(10,i)*(i+1);
            //cout << k << endl;
            casas++;
        }
        //cout << "casas decimais = " << casas << endl;
        int numero = pow(10,casas-1) + (int)k/casas;
        //if(k%casas == 0)
           // numero--;
        
        //cout << "num = " << numero << endl;
        string numeroStr = to_string(numero);
        //cout << numeroStr << endl;
        cout << numeroStr[casas-1-k%casas] << endl;
        q--;
    }
    return 0;
}