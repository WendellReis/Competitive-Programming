#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;

    int quant = 0;
    for(int i = 0; i < s.size();i++)
        if(s[i] == 'O') quant++;
    if(quant >= 2)
        cout << "?\n";
    else{
        for(int i = 0; i < s.size()-1;i++){
            if(s[i] == 'X' && s[i+1] == 'X'){
                cout << "Alice\n";
                return 0;
            }
        }
        cout << "*\n";
    }
    return 0;
}