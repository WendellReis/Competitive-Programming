#include <iostream>

using namespace std;

int main(){
    int n, soma = 0, maior = 0;
    cin >> n;

    int mat[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> mat[i][j];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++)
                soma = soma + mat[k][j]+mat[i][k];
            soma-=2*mat[i][j];
            
            if(soma > maior)
                maior = soma;
            soma = 0;
        }
    }            
    cout << maior << endl;    
    return 0;
}