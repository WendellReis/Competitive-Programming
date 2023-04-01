#include <bits/stdc++.h>

using namespace std;

string binary(int n, int tam);

int main(){
    int n, eventos = 0;
    cin >> n;

    int tot = pow(2,n);
    string s;
    for(int i = 0; i < tot; i++){
        s = binary(i,n);
        for(int j = 0; j < n - 1; j++)
            if(s[j] == '0' && s[j+1] == '0') {eventos++;break;}
    }
    
    eventos = tot - eventos;
    int d = 2;
    while(d <= eventos){
        if(eventos%d == 0 && tot%d == 0){
            eventos/=d;
            tot/=d;
        } else d++;
    }
    cout << eventos << "/" << tot << endl;
    return 0;
}

string binary(int n, int tam){
    string s = "";
    for(int i = 0; i < tam; i++)
        s = s.append("0");
    for(int i = 0; n/2 != 0 || n%2 != 0; i++){
        if(n%2 == 1) s[tam-1-i] = '1';
        n/=2;
    }
    return s;
}