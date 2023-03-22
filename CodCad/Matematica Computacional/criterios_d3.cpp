#include <iostream>

using namespace std;

int num(string str, int idx);
bool div_11(string str, int tam);

int main(){
    string s;

    cin >> s;
    int tam = s.size();

    if(div_11(s,tam)) cout << "S\n";
    else cout << "N\n";

    return 0;
}

int num(string str, int idx){
    return (int)(str[idx] - '0');
}

bool div_11(string str, int tam){
    int si = 0, sp = 0;
    for(int i = 0; i < tam; i++) {
        if(i%2==0) sp+=num(str,i);
        else si+=num(str,i);
    }

    if(si == sp) return true;
    return false;
}
