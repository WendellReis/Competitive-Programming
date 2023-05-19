#include <bits/stdc++.h>

using namespace std;

int main(){
    int P, A, v, soma = 0;
    cin >> P >> A;

    vector<int> preco, pizza;
    preco.push_back(0);
    for(int i = 0 ; i < P; i++){
        cin >> v;
        preco.push_back(v);
    }

    pizza.push_back(0);
    for(int i = 0 ; i < A; i++){
        cin >> v;
        pizza.push_back(preco[v]);
    }

    sort(pizza.begin(), pizza.end());
    for(int i = pizza.size() - 1; i > 0; i-=2)
        soma+=pizza[i];
    cout << soma << "\n";
    return 0;
}
