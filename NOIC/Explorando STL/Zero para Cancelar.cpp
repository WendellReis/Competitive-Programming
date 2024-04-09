//Problem Link:https://neps.academy/br/exercise/1486

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio();
    cin.tie(0);

    int n; cin >> n;

    stack<int> s;
    for(int i = 0,v; i < n; i++) {
        cin >> v;
        
        if(v) s.push(v);
        else s.pop();
    }

    int sum = 0;
    while(!s.empty())
        sum+=s.top(),s.pop();
    
    cout << sum << "\n";
    return 0;
}