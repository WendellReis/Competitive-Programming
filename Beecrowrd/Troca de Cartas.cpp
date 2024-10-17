#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int a,b,v; cin >> a >> b;

    while(a && b) {
        set<int> x,y;
        for(int i = 0; i < a; i++){
            cin >> v;
            x.insert(v);
        }
        for(int i = 0; i < b; i++){
            cin >> v;
            y.insert(v);
        }
        int max;
        if(x.size() <= y.size()){
            max = x.size();
            for (auto c : x)
                if(y.find(c) != y.end())
                    max--;
        } else{
            max = y.size();
            for (auto c : y)
                if(x.find(c) != x.end())
                    max--;
        }
        cout << max << "\n";
        cin >> a >> b;
    }
    
    return 0;
}