#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    cin.ignore();

    while(t--) {
        vector<string> v;
        string s;
        int tam1 = INT32_MAX-1, tam2 = 1;
        while(cin >> s) {
            v.push_back(s);
            tam1 = min(tam1,(int)s.size());
            tam2 = max(tam2,(int)s.size());
        }

        int tam = tam1+tam2;
        vector<int> r(tam,0);
        for(int i = 0; i < v.size(); i++)
            for(int j = 0; j < v[i].size(); j++)
                if(v[i][j] == '0') r[j]--,r[tam-1-j]--;
                else r[j]++,r[tam-1-j]++;
        
        bool pass = true;
        for(int i = 0; i < tam; i++)
            if(r[i] == 0) {
                pass = false;
                break;
            }

        if(pass) {
            for(int i = 0; i < tam; i++)
                if(r[i] < 0) cout << "0";
                else cout << "1";
            cout << "\n";
        }
    }

    return 0;
}

