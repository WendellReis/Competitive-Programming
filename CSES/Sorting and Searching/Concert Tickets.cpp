/*
    CSES Problem Set
    https://cses.fi/problemset/task/1091
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;

    vector<int> h(n),t(m);
    set<pair<int,int>> tickets;
    for(int i = 0; i < n; i++){
        cin >> h[i];
        tickets.insert({h[i],i});
    }
    
    for(int i = 0; i < m; i++){
        cin >> t[i];

        //t[i]+1 pois t[i] é um valor dentro do limite de busca
        auto it = tickets.lower_bound({t[i]+1,0});
        if(it == tickets.begin())
            cout << "-1\n";
        else{
            it--; //lower_bound retornar o rimeiro elemento que não é menor do que o valor passado como argumento
            cout << (*it).first << "\n";
            tickets.erase(it);
        }
    }
    return 0;
}