//Problem Link: https://br.spoj.com/problems/PROIBIDO/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio();
    cin.tie(0);
    
    int n,v; cin >> n;

    set<int> s;
    for(int i = 0; i < n; i++)
        cin >> v, s.insert(v);
    
    while(cin >> v) {
        if(s.find(v) != s.end())
            cout << "sim\n";
        else
            cout << "nao\n";
    }

    return 0;
}