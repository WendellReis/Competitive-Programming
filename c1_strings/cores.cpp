#include <bits/stdc++.h>

using namespace std;

int main() {
    string cor;
    cin >> cor;

    if(cor == "amarela" || cor == "vermelha" || cor == "azul")
        cout << "primaria\n";
    else if(cor == "laranja" || cor == "verde" || cor == "roxa")
        cout << "secundaria\n";
    else
        cout << "outra\n";

    return 0;
}