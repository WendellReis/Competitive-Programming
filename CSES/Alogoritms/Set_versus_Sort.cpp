#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,v; cin >> n;
 
    unordered_set<int> s;
    for(int i = 0; i < n; i++){
        cin >> v;
        s.insert(v);
    }
 
    cout << s.size() << "\n";
    return 0;
}
