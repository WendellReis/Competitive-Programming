#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;
    cin.ignore();

    map<string,int> m;
    int g = 0;
    string t, winner;

    while(n--) {
        cin >> t;

        auto it = m.find(t);
        if(it == m.end()) {
            m[t] = 0;
            it = m.find(t);
        }
        it->second++;
        if(it->second > g) {
            g = it->second;
            winner = it->first;
        }
    }
    cout << winner << "\n";
    return 0;
}