#include <bits/stdc++.h>

using namespace std;

int inteiro(string s);

int main(){
    string a, b;
    char c;
    cin >> a >> c >> b;
    int r = 0;
    if(c == '+') r = inteiro(a) + inteiro(b); 
    else if(c == 'x') r = inteiro(a) * inteiro(b);
    else if(c == '-') r = inteiro(a) - inteiro(b);
    else if(inteiro(b) != 0) r = inteiro(a) / inteiro(b);

    string res = to_string(r);
    cout << inteiro(res) << endl;
    return 0;
}

int inteiro(string s){
    int num = 0, tam = s.size() - 1;
    for(int i = tam; i >= 0; i--)
        if(s[i] != '7') 
            num = num + (int)(s[i] - '0')*pow(10,tam - i);
    return num;
}