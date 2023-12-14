#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    cin.ignore();

    int v[10] = {0};

    string s;
    for (int i = 0; i < n; i++){
        cin >> s;
        for (int j = 0; j  < s.size(); j++)
            v[s[j]-'0']++;
    }
    
    for (int i = 0; i < 10; i++){
        cout << i << " - " << v[i] << '\n';
    }

    return 0;
}