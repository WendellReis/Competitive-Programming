#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int quant = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] >= '0' && s[i] <= '9')
            quant++;
    cout << quant << "\n";
    return 0;
}