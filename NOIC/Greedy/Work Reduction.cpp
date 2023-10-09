#include <bits/stdc++.h>

using namespace std;

typedef struct{
    string nome;
    int a;
    int b;
} agencia;

int main(){
    int t, k = 1; cin >> t;

    while(k <= t){
        int m,n,l; cin >> m >> m >> l;
        
        vector<agencia> vet(l);
        string input;
        for(int i = 0; i < l; i++){
            cin >> input;

            stringstream ss(input);
            char sep;
            getline(ss,vet[i].nome,':');
            ss >> vet[i].a >> sep >> vet[i].b;
            
        }

        int aux = m;

        k++;
    }
    return 0;
}