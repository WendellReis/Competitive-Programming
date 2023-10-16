/*
    Problem Name: Concurso de Contos
    Problem Link: https://www.beecrowd.com.br/judge/pt/problems/view/1222
    Author: Wendell R. M. Matias (Foxtrot)
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,l,c;

    while(cin >> n >> l >> c){
        string words;
        vector<int> tam;
        for(int i = 0; i < n; i++){
            cin >> words;
            tam.push_back(words.size());
        }
            
        
        sort(tam.begin(),tam.end());
        int quant = 0, ini = 0, fim = tam.size(), tam = 0;
        while(ini <= fim){
            
        }
    }

    return 0;
}