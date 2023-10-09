#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    while(n != 0){
        set<pair<int,int>> s;
        map<pair<int,int>,int> freq;
        
        int a,b;
        for(int i = 0; i < n; i++){
            cin >> a >> b;
            s.insert({a,b});
            
            auto it = freq.find({a,b});
            if(it != freq.end())
                freq[{a,b}] = 1;
            else
                freq[{a,b}]++;
        }
        
        bool f = true;
        for(auto u : s){
            if(freq[u] == 0)
                continue;
            if(s.find({u.second,u.first}) != s.end()){
                if(freq[{u.second,u.first}] != 0){
                    freq[{u.second,u.first}]--;
                    freq[u]--;
                }
                else{
                    f = false;
                    break;
                }
            } else{
                cout << "NO\n";
                f = false;
                break;
            }
        }
        if(f)
            cout << "YES\n";
        cin >> n;
    }
    return 0;
}