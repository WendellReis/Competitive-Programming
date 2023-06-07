#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore(); //ignora o caractere de nova linha após ler o inteiro

    //Leitura das linhas
    vector<string> lines;
    for(int i = 0; i < n; i++){
        string line;
        getline(cin, line);
        lines.push_back(line);
    }

    stack<char> chaves;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < lines[i].size(); j++){
            if(lines[i][j] == '{') 
                chaves.push('{');
            else if(lines[i][j] == '}'){
                if(chaves.size() > 0)
                    chaves.pop();
                else{
                    cout << 'N' << "\n";
                    return 0;
                }
            }
        }
    if(chaves.size() == 0)
        cout << 'S' << "\n";
    else
        cout << 'N' << "\n";        
    return 0;
}