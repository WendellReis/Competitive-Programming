#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int x,n; cin >> x >> n;

    set<int> s; s.insert(0); s.insert(x);
    map<int,int> tam; tam[x] = 1;

    while(n--) {
        int p; cin >> p;

        auto depois = s.upper_bound(p);
        auto antes = depois; antes--;

        int intervalo = *depois - *antes;
        tam[intervalo]--;
        if(tam[intervalo] == 0)
            tam.erase(tam.find(intervalo));
        
        s.insert(p);
        auto ita = tam.find(p - *antes);
        if(ita == tam.end()) tam[p - *antes] = 1;
        else tam[p - *antes]++;

        auto itd = tam.find(*depois-p);
        if(itd == tam.end()) tam[*depois-p] = 1;
        else tam[*depois-p]++;

        auto maior = tam.end(); maior--;
        cout << maior->first << " ";
    }
    cout << "\n";
    return 0;
}