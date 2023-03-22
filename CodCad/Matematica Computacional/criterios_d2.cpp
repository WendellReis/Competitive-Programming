#include <iostream>

using namespace std;

int num(string str, int idx){
    return (int)(str[idx] - '0');
}

int main(){
    string s;

    cin >> s;
    int tam = s.size(), sum = 0;

    if((tam == 1 && num(s,0)%4 == 0) || (tam > 1 && (10*num(s,tam-2)+num(s,tam-1))%4 == 0)) cout << "S\n";
    else cout << "N\n";

    for(int i = 0; i < tam; i++) sum+= num(s,i);

    if(sum%9 == 0) cout << "S\n";
    else cout << "N\n";

    if((tam == 1 && s[0] == 0) || (tam > 1 && (10*num(s,tam-2)+num(s,tam-1)%25 == 0))) cout << "S\n";
    else cout << "N\n";

    return 0;
}
