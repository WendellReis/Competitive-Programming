#include <iostream>

int busca_dir(int *v, int k){
    int n = 0, tam = sizeof(v)/sizeof(int);
    for(int i = k; i < tam; i++){
        if(v[i] == 0)
            return n;
        n++;
    }
    return n;
}

int busca_esq(int *v, int k){
    int n = 0;
    for(int i = k; i >= 0; i--){
        if(v[i] == 0)
            return n;
        n++;
    }
    return n;
}

using namespace std;

int main(){
    int n;
    cin >> n;
    int fita[n], esq = 0, dir = 0; 

    for(int i = 0; i < n; i++)
        cin >> fita[i];

    for(int i = 0; i < n; i++){
        if(fita[i] == 0)
            cout << "0 ";
        else{
            esq = busca_esq(fita,i);
            dir = busca_dir(fita,i);
            if(esq <= dir)
                cout << esq << " \n";
            else
                cout << dir << " \n";
        }
    }
    return 0;
}