#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    cin.ignore();
    for(int i = 0; i < n; i++) {
        bool f = true;
        string s; cin >> s;
        stack<char> p;

        for(int j = 0; j < s.size(); j++) {
            if(s[j] == '}') {
                if(p.empty()) {
                    f = false;
                    break;
                }
                
                if(p.top() != '{') {
                    f = false;
                    break;
                }

                p.pop();
            } else if(s[j] == ')') {
                if(p.empty()) {
                    f = false;
                    break;
                }
                
                if(p.top() != '(') {
                    f = false;
                    break;
                }

                p.pop();
            } else if(s[j] == ']'){
                if(p.empty()) {
                    f = false;
                    break;
                }
                
                if(p.top() != '[') {
                    f = false;
                    break;
                }

                p.pop();
            } else
                p.push(s[j]);
        }

        if(f && p.empty()) cout << "S\n";
        else cout << "N\n";
    }

    return 0;
}