#include <bits/stdc++.h>

using namespace std;

int main(){
    string num; cin >> num;

    int soma = 0, ult = (int)(num[num.size()-1]-'0');
    if(num.size() > 1)
        ult += 10*(int)(num[num.size()-2]-'0');
    if(ult%4 == 0)
        cout << "S\n";
    else
        cout << "N\n";

    for(int i = 0; i < num.size(); i++)
        soma+=(int)(num[i]-'0');
    if(soma%9 == 0)
        cout << "S\n";
    else
        cout << "N\n";
    
    if(ult%25 == 0)
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}