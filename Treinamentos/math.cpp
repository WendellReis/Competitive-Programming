#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <bits/stdc++.h>

#include <bitset> // mais eficiente que vector<bool>!

using namespace std;

typedef long long ll;


ll _tam_crivo; // ll definido com: typedef long long ll;
bitset<10000010> bs; // 10^7 + extra bits, suficiente para maioria
vector<int> primos;  // lista de primos

void crivo(ll limite){ // cria lista de primos em [0..limite]
    _tam_crivo = limite + 1; // + 1 para incluir limite
    bs.reset();
    bs.flip(); // todos valendo true
    bs.set(0, false);
    bs.set(1, false); // exceto indices 0 e 1
    for (ll i = 2; i <= _tam_crivo; i++)
        if (bs.test((size_t)i)){ // corta todos os multiplos de i comecando de i*i
            for (ll j = i * i; j <= _tam_crivo; j += i)
                bs.set((size_t)j, false);
            primos.push_back((int)i); // adiciona na lista de primos
        }
} // OBS: chamar esse metodo na funcao main!

bool eh_primo(ll N){ // metodo rapido para teste de primalidade
    if (N < _tam_crivo)
        return bs.test(N); // O(1) para primos pequenos
    for (int i = 0; i < primos.size(); i++)
        if (N % primos[i] == 0)
            return false;
    return true; // demora mais quando N e’ primo
} // OBS: so funciona se N <= (ultimo primo do vector primos)^2

vector<int> primeFactors(int N){
    vector<int> factors;
    int PF_idx = 0, PF = primos[PF_idx]; // primos gerado pelo crivo
    while (N != 1 && (PF * PF <= N)){ // ate sqrt(N), mas N vai diminuind
        while (N % PF == 0){
            N /= PF; // retira esse fator do N
            factors.push_back(PF); // e o adiciona na lista
        }
        PF = primos[++PF_idx]; // considera somente primos
    }
    if (N != 1)
        factors.push_back(N); // caso especial, se N for primo
    return factors;
}

int main(){
    int n; cin >> n;

    if(eh_primo(n)) {
        printf("%d 0\n",n);
        return 0;
    }

    crivo(n+1);
    vector<int> r = primeFactors(n);

    r.push_back(1);

    int k = 1, count = 0;
    for(int i = 0; i < r.size()-1; i++) {
        k*=r[i];
        if(r[i] == r[i+1])
            i++;
        else
            count++;
    }

    printf("%d %d", sqrt(k), count);
}