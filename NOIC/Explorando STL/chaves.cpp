//Problem Link: https://neps.academy/br/exercise/56

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    cin.ignore();

    vector<string> s(n);
    for(int i = 0; i < n; i++)
        getline(cin,s[i]);

    stack<char> p;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < s[i].size(); j++) {
            if(s[i][j] == '{')
                p.push('{');
            else if(s[i][j] == '}') {
                if(p.empty()) {
                    cout << "N\n";
                    return 0;
                }

                p.pop();
            }
        }
    
    if(p.empty()) cout << "S\n";
    else cout << "N\n";
    
    return 0;
}