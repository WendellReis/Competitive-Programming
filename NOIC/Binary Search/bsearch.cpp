#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    set<int> q;
    int v;
    for(int i = 0; i < n; i++){
        cin >> v;
        q.insert(v);
    }

    cout << q.size() << "\n";
}