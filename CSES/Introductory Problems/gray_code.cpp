#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<char>> code;

    //Inicialização
    vector<char> ini;
    ini.push_back('0');
    code.push_back(ini);
    ini[0] = '1';
    code.push_back(ini);

    for(int i = 1; i < n; i++){
        for(int j = code.size(); j > 0; j--)
            code.push_back(code[j-1]);

        int tam = code.size();
        for(int j = 0; j < tam; j++)
            code[j].push_back(code[j/2][i-1]);
    }

    for(int i = 0; i < (int)code.size(); i++){
        for(int j = (int)code[i].size(); j > 0; j--)
            cout << code[i][j-1];
        cout << "\n";
    }    
    return 0;
}