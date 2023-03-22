#include <iostream>

using namespace std;

void inserir(int *v, int tam, int k){
    if(tam == 0)
        v[tam] = k;
    else{
        for(int i = 0; i < tam; i++){
            if(v[i] >= k){
                for(int j = tam; j > i; j--)
                    v[j] = v[j-1];
                v[i] = k;
                break;
            }      
        }
    }
}

int main(){
    int n, tam = 0;
    cin >> n;
    int v[n], ord[n];

    for(int i = 0; i < n; i++){
        cin >> v[i];
        inserir(ord,tam,v[i]);
        tam++;
    }

    for(int i = 0; i < n; i++)
        cout << ord[i] << " ";
    cout << endl;    
    return 0;
}