#include <iostream>
#include <string>

using namespace std;

int main(){
    int t, i, j=0, encontrado = 0;
    char c;
    string str = "codeforces";
    

    cin >> t;
    for(i=0; i<t; i++){
        encontrado = 0;
        j = 0;
        cin >> c;

        while(str[j] != '\0'){
            if(c == str[j])         // essa parte é pra verificar se o caracter digitado está na palavra "codeforces"
                encontrado = 1;
            
            j++; // aumenta 1 unidad, para poder passar pra próxima letra da string
        }
        if(encontrado == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;     
    }

    return 0;
}