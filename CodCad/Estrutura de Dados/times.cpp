#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t, nivel;
    string nome;
    cin >> n >> t;

    vector<pair<string, int>> lista, times[t];

    for(int i = 0; i < n; i++){
        cin >> nome >> nivel;
        lista.push_back(make_pair(nome,nivel));
    }

    int num = 0;
    while(lista.size() != 0){
        int index = 0, m = lista[0].second;

        //Encontrando jogador de maior nível
        for(int i = 1; i < lista.size(); i++)
            if(lista[i].second > m){
                index = i;
                m = lista[i].second;
            }
        times[num].push_back(lista[index]);
        lista.erase(lista.begin()+index);

        num++;
        if(num == 3) num = 0;
    }

    for(int i = 0; i < t; i++)
        sort(times[i].begin(), times[i].end());
    
    for(int i = 0; i < t; i++){
        cout << "Time " << i+1 << endl;
        for(int j = 0; j < times[i].size(); j++)
            cout << times[i][j].first << endl;
        cout << endl;
    }
    return 0;
}