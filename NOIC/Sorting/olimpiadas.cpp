//Problem Link: https://neps.academy/br/exercise/243

#include <bits/stdc++.h>

using namespace std;

struct pais{
    int n;
    int o = 0;
    int p = 0;
    int b = 0;
};

bool cmp(pais a, pais b) {
    if(a.o > b.o)
        return true;
    else if(b.o > a.o)
        return false;

    if(a.p > b.p)
        return true;
    else if(b.p > a.p)
        return false;
    
    if(a.b > b.b)
        return true;
    else if(b.b > a.b)
        return false;
    
    if(a.n < b.n)
        return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio();
    cin.tie(0);

    int n,m; cin >> n >> m;

    pais v[n];
    for(int i = 0; i < n; i++)
        v[i].n = i+1;
    
    for(int i = 0,o,p,b; i < m; i++) {
        cin >> o >> p >> b;
        v[o-1].o++;
        v[p-1].p++;
        v[b-1].b++;
    }

    sort(v,v+n,cmp);
    for(int i = 0; i < n; i++)
        cout << v[i].n << " ";
    cout << "\n";

    return 0;
}