#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    string s;
    vector<string> v;
    while(N--) {
        getline(cin >> ws, s);
        v.push_back(s);
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < v.size()-1; i++) {
        if(v[i] == v[i+1]) {
            cout << "A funcao nao eh boa.\n";
            exit(0);
        }
    }

    cout << "A funcao eh boa.\n";

    return 0;
}