#include <bits/stdc++.h>

using namespace std;

void solve(vector<char> palavra, vector<char> disp, vector<vector<char>>& lista){
    if(disp.size() == 1){
        lista.push_back(palavra);
    } else{
        cout << disp.size();
        char ant = disp[0];
        int i = 0;
        while(!disp.empty()){
            i++;
            if(disp[i] != ant || i+1 == disp.size()){
                char temp = disp[i];
                disp.erase(disp.begin());
                palavra.push_back(ant);
                solve(palavra,disp, lista);
                i = 0;
                ant = temp;
            }
        }
    }
    
}

int main(){
    string s;
    cin >> s;
    vector<char> cadeia, palavra;

    for(int i = 0; i < s.length(); i++)
        cadeia.push_back(s[i]);
    sort(cadeia.begin(), cadeia.end());
    
    vector<vector<char>> lista;
    solve(palavra, cadeia, lista);
    cout << lista.size() << "\n";
    for(int i = 0; i < lista.size(); i++){
        for(int j = 0; j < lista[i].size(); j++)
            cout << lista[i][j];
        cout << "\n";
    }
    return 0;

}