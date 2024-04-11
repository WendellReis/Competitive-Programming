//Problem Link: https://br.spoj.com/problems/INSCRICO/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio();
    cin.tie(0);

    int n;

    while(cin >> n) {
        map<string,int> m;

        string a;
        vector<string> hist;
        for(int i = 0; i < n; i++) {
            cin.ignore();
            cin >> a >> a;

            if(m.find(a) == m.end()) {
                m[a] = 1;
                hist.push_back(a);
            }
            else
                m[a]++;
        }

        for (auto u : hist)
            cout << u << " " << m[u] << "\n";
    }

    return 0;
}