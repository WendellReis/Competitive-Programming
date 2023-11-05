#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,t; cin >> n >> m;

    vector<int> h(n);
    set<pair<int,int>> tickets;
    for(int i = 0; i < n; i++){
        cin >> h[i];
        tickets.insert({h[i],i});
    }
    
    for(int i = 0; i < m; i++){
        cin >> t;
        
        auto it = tickets.lower_bound({t+1,0});
        if(it == tickets.begin())
            cout << "-1\n";
        else{
            it--;
            cout << (*it).first << "\n";
            tickets.erase(it);
        }
    }
    return 0;
}