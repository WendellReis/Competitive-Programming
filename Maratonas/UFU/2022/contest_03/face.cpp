#include <bits/stdc++.h>

using namespace std;

string binary(int n, int tam);

int main(){
    string s = binary(32,10);
    return 0;
}

string binary(int n, int tam){
    string s = "";
    for(int i = 0; i < tam; i++)
        s = s.append("0");
    int m = log(n)/log(2);
    cout << m;
    return s;
}