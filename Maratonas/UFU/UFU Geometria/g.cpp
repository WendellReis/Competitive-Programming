#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin,s);

    for(int i = 0; i < s.size(); i++) {
        if(i%2 == 0) s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
    }

    cout << s << "\n";
    return 0;
}