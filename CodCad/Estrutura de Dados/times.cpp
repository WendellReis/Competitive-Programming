#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t, nivel;
    string nome;
    cin >> n >> t;

    vector<pair<int, string>> lista, times[t];

    for(int i = 0; i < n; i++){
        cin >> nome >> nivel;
        lista.push_back(make_pair(nivel, nome));
    }

    sort(lista.begin(), lista.end());

    int num = 0;
    while(lista.size() != 0){
        lista[lista.size()-1].first = 0;
        times[num].push_back(lista[lista.size()-1]);
        lista.erase(lista.begin()+lista.size()-1);
        num++;
        if(num == t) num = 0;
    }

    for(int i = 0; i < t; i++)
        sort(times[i].begin(), times[i].end());
    
    for(int i = 0; i < t; i++){
        cout << "Time " << i+1 << endl;
        for(int j = 0; j < times[i].size(); j++)
            cout << times[i][j].second << endl;
        cout << endl;
    }
    return 0;
}