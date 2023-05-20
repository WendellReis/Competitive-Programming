#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n != 0){
        vector<int> lista, listaord;
        int v;
        for(int i = 0; i < n; i ++){
            cin >> v;
            listaord.push_back(v);
            lista.push_back(v);
        }
        sort(listaord.begin(),listaord.end());
        for(int i = 0; i < n; i++)
            if(lista[i] == listaord[n-2])
                cout << i + 1 << "\n";
        cin >> n;
    }
}