#include <iostream>

using namespace std;

void removeMenor(char *s, int tam);

int main(){
    int n, d;
    cin >> n >> d;

    while(n != 0 && d != 0){
        char num[n];
        cin >> num;

        for(int i = 0; i < d; i++) removeMenor(num,n);

        for(int i = 0; i < n; i++)
            if(num[i] <= '9') cout << num[i];
        cout << endl;
        cin >> n >> d;
    }
    
    return 0;
}

void removeMenor(char *s, int tam){
    char m = '9';

    for(int i = 0; i < tam; i++) 
        if(s[i] < m) m = s[i];

    for(int i = 0; i < tam; i++)
        if(s[i] == m){
            s[i] = '9'+1; //invalida o menor dígito
            break;
        } 
}