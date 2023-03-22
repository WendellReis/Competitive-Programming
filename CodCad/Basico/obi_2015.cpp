#include <iostream>

using namespace std;

int main(){
    int n, v, quant = 0;
    cin >> n;
    int vet[n];
    for(int i = 0; i < n; i++){
        cin >> v;
        vet[i] = v;
    }

    for(int i = 0; i <= n-2; i++)
        if(vet[i] == 1 && vet[i+1] == 0 && vet[i+2] == 0)
            quant++;
    cout << quant << endl;
    return 0;
}