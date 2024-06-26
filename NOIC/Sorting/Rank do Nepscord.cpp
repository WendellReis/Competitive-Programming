#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int m,k; cin >> m >> k;

    vector<pair<string,int>> v(m);
    for(int i = 0; i < m; i++) {
        cin.ignore();
        cin >> v[i].F >> v[i].S;
    }

    sort(v.begin(),v.end());
    
    map<string,int> rank;
    rank.insert({v[0].F,1});
    int ult = v[0].S;
    for(int i = 1; i < m; i++) {
        if(v[i].F == v[i-1].F) {
            if(v[i].S - ult >= k) {
                rank[v[i].F]++;
                ult = v[i].S;
            }
        } else {
            rank[v[i].F] = 1;
            ult = v[i].S;
        }
    }

    cout << "--Rank do Nepscord--\n";
    for(int i = 1; i <= 3; i++) {
        printf("#%d. ",i);
        if(rank.size() > 0) {
            int maior = 0;
            string nome;
            for(auto u : rank) {
                if(u.S > maior) {
                    nome = u.F;
                    maior = u.S;
                } else if(u.S == maior && u.F < nome)
                    nome = u.F;
            }
            cout << nome << " - Nivel " << 1+(int)maior/4;
            rank.erase(rank.find(nome));
        }
        printf("\n");
    }

    return 0;
}