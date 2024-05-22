#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;

    int p = 0;
    if(s[0] == 'h')
        cout << "http://", p = 4;
    else
        cout << "ftp://", p = 3;

    cout << s[p]; p++;
    while(s[p] !='r' || s[p+1]!='u') {
        cout << s[p];
        p++;
    }

    cout << ".ru";
    p+=2;
    if(p < s.size())
        cout << "/";
    while(p < s.size()) {
        cout << s[p];
        p++;
    }
    cout << "\n";
    return 0;
}

