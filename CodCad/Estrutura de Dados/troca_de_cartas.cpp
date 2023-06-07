#include <bits/stdc++.h>

using namespace std;
#define REP(i,a,b) for(int i = a; i < b; i++)

int main(){
    int a,b,v; cin >> a >> b;

    set<int> x,y;
    REP(i,0,a){
        cin >> v;
        x.insert(v);
    }
    REP(i,0,b){
        cin >> v;
        y.insert(v);
    }
    int max;
    if(x.size() <= y.size()){
        max = x.size();
        for (auto& c : x)
            if(y.find(c) != y.end())
                max--;
    } else{
        max = y.size();
        for (auto& c : y)
            if(x.find(c) != x.end())
                max--;
    }
    cout << max << "\n";

    return 0;
}