#include <iostream>

using namespace std;

int main(){
    int n, i, j, cont = 1;
    
    while(cin >> n){  
        int espaco = n/2;
        while(cont <= n){               // essa parte é pra fazer a árvore
            for(i=0; i<espaco; i++) 
                cout << " ";           
            for(i=0; i<cont; i++)
                cout << "*";           

            cout << endl;
            cont+=2;                // cont aumenta 2, porque de uma linha pra outra aumenta 2 *
            espaco --;              // espaço vai diminuir um, porque na próxima linha o espaço vai ter diminuído
        }
        cont = 1;

        for(i=0; i<n/2; i++)     // essa parte é pra fazer o tronco da árvore
            cout << " ";         
        cout << "*\n";           

        for(i=0; i<n/2-1; i++)
            cout << " ";         
        cout << "***";            

        cout << endl;
        cout << endl;
    }

    return 0;
}