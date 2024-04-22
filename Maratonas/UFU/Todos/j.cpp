#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,p; cin >> n;

    while(n != 0) {
        cin >> p;

        vector<int> temp(n);
        for(int i = 0; i < n; i++)
            cin >> temp[i];

        bool repete = false;
        set<int> s;
        for(int i = 0; i < n; i++) {
            if(s.find(temp[i]) != s.end()) {
                repete = true;
                break;
            }

            s.insert(temp[i]);
        }
        
        if(repete) cout << "1\n";
        else cout << "0\n";

        cin >> n;
    }
    
    return 0;
}