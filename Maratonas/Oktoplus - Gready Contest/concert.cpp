#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,v; cin >> m >> n;

    set<pair<int,int>> s;
    for(int i = 0; i < n; i++){
        cin >> v;
        s.insert({v,i+1});
    }

    for(int i = 0; i < m; i++){
        cin >> v;
        auto it = s.lower_bound({v+1,0});

        if(it == s.begin())
            cout << "-1\n";
        else{
            cout << (*it).first << "\n";
            s.erase(it);
        }
    }
    return 0;
}