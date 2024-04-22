#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    while(n--) {
        int p; cin >> p;
        cin.ignore();

        vector<int> verde, amarelo;
        for(int i = 0; i < p; i++) {
            string s; cin >> s;
            if(s[s.size()-1] == 'V') {
                s.erase(s.size()-1);
                verde.push_back(stoi(s));
            } else {
                s.erase(s.size()-1);
                amarelo.push_back(stoi(s));
            }
        }

        sort(verde.rbegin(),verde.rend());
        sort(amarelo.rbegin(),amarelo.rend());

        int tam = 0;
        for(int i = 0; i < verde.size() && i < amarelo.size(); i++)
            tam = tam + verde[i] + amarelo[i] - 2;
        cout << tam << "\n";
    }

    return 0;
}