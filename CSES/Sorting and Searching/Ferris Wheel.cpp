/*
    CSES Problem Set
    https://cses.fi/problemset/task/1090
*/
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

int main(){
    ull n,x,v; cin >> n >> x;

    vector<ull> p;
    for(ull i = 0; i < n; i++){
        cin >> v;
        p.push_back(v);
    }

    sort(p.begin(),p.end());
    ull ini = 0, fim = n-1, quant = 0;
    while(ini <= fim){
        if(ini == fim){
            quant++;
            break;
        }
        if(p[fim] + p[ini] <= x)
            ini++;
        fim--;
        quant++;
    }
    cout << quant << "\n";
    return 0;
}