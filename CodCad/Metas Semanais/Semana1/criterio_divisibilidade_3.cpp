#include <bits/stdc++.h>

using namespace std;

int main(){
    string num; cin >> num;
    int soma = 0;
    for(int i = 0; i < num.size(); i++)
        soma += (int)(num[i]-'0')*pow(-1,i%2);
    
    if(soma%11 == 0)
        cout << "S\n";
    else
        cout << "N\n";
    
    return 0;
}