#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,v; cin >> n >> k;

    map<int,int> values;
    vector<int> mid;
    for(int i = 1; i <= n; i++){
        cin >> v;
        if((double)v - (double)k/2 == 0.0)
            mid.push_back(i);
        else
            values[v] = i;
    }

    if(mid.size() > 1){
        cout << mid[0] << " " << mid[1] << "\n";
        return 0;
    }

    for(auto u : values){
        auto it = values.find(k-u.first);
        if(it != values.end()){
            cout << u.second << " " << it->second << "\n";
            return 0;
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}