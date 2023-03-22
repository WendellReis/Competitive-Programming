#include <iostream>

void ordenaVetor(int *v, int tam){
    int aux;
    for(int i = 0; i < tam; i++)
        for(int j = i; j < tam; j++)
            if(v[i] > v[j]){
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
}

using namespace std;

int main(){
    int n, quant = 0;
    
    cin >> n;
    int v[n], v_ord[n];

    for(int i = 0; i < n; i++){
        cin >> v[i];
        v_ord[i] = v[i];
    }
        
    
    ordenaVetor(v_ord,n);
    for(int i = 0; i < n; i++)
        if(v[i] != v_ord[i])
            quant++;

    cout << quant << endl;
    for(int i = 0; i < n; i++)
        if(v[i] != v_ord[i])
            cout << v_ord[i] << " ";
    cout << endl;
    return 0;
}