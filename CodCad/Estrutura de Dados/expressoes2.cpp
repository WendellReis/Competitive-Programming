#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    bool v = true;
    string s;
    stack<char> p;
    cin >> n;

    for(int i = 0; i < n; i++){
        v = true;
        cin >> s;
        for(int j = 0; j < s.size(); j++){
            if(s[j] == '{' || s[j] == '(' || s[j] == '[') p.push(s[j]);
            else if((s[j] == ']' && p.top() == '[') ||
                    (s[j] == '}' && p.top() == '{') ||
                    (s[j] == ')' && p.top() == '('))
                    p.pop();
            else {v = false; break;}
        }

        if(v && p.size() == 0) cout << "S" << endl;
        else cout << "N" << endl;
        p.empty();   
    }
    return 0;
}