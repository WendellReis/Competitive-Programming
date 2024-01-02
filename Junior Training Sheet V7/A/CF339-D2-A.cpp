#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    string ord = "";

    for(int i = 0; i < s.size(); i++)
        if(s[i]!='+')
            ord+=s[i];

    sort(ord.begin(),ord.end());

    cout << ord[0];
    for(int i = 1; i < ord.size(); i++)
        cout << '+' << ord[i];
    cout << "\n";

    return 0;
}