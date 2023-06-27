#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    string num; cin >> num;
    int soma = 0;
    num.insert('0');
    if((int)(num[num.size()-1]-'0')%2 == 0)
        cout << "S\n";
    else
        cout << "N\n";

    for(int i = 0; i < num.size(); i++)
        soma+=(int)(num[i]-'0');
    if(soma%3 == 0)
        cout << "S\n";
    else
        cout << "N\n";
    
    if(num[num.size()-1] == '0' || num[num.size()-1] == '5')
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}