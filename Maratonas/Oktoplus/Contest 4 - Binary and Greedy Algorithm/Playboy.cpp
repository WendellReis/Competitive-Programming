#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,q; cin >> n;

    set<long long> s;
    long long v;
    for(int i = 0; i < n; i++){
        cin >> v;
        s.insert(v);
    }

    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> v;
        auto inf = s.lower_bound(v);
        if(inf == s.begin())
            cout << "X ";
        else{
            inf--;
            cout << *inf << " ";
        }
            
        
        auto sup = s.upper_bound(v);
        if(sup == s.end())
            cout << "X\n";
        else
            cout << *sup << "\n";
    }
    return 0;
}