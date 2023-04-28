#include <bits/stdc++.h>
#include <string>
#define ll long long

using namespace std;

int main(){
    ll n, k, v;
    cin >> n;

    while(n > 0){
        cin >> v;
        k = 9;
        while(v/k >= 1) k*=10;

        ll casas = log10(k/9*10);
        ll digitos_utilizados = k/9 - 1;
        ll digitos_restantes = v - digitos_utilizados;
        ll ultimo_numero = k/9 + (v - digitos_utilizados)/casas - 1;
        ll unidade = digitos_restantes%casas;
        if(unidade) ultimo_numero++;

        cout << ultimo_numero << endl;
        string str = to_string((ll)ultimo_numero);
        cout << str[str.length()-1-unidade] << endl;
        n--;
    }
    return 0;
}