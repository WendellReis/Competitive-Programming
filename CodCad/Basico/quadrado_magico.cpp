#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int n, soma = 0, temp = 0, diag1 = 0, diag2 = 0;
    cin >> n;
    int mat[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
            if(i == 0)
                soma+= mat[i][j];
        }       

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            temp+=mat[i][j];
        }
        
        if(temp!=soma){
            cout << -1 << endl;
            exit(1);
        }
        temp = 0;

        for(int j = 0; j < n; j++){
            temp+=mat[j][i];
        }
   
        if(temp!=soma){
            cout << -1 << endl;
            exit(1);
        }
        temp = 0;

        diag1+=mat[i][i];
        diag2+=mat[i][n-i-1];
    }

    if(diag1 != soma || diag2 != soma)
        cout << -1 << endl;
    else
        cout << soma << endl;

    return 0;
}