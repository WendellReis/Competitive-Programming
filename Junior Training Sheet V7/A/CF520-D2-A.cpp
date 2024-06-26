//Problem Link: https://codeforces.com/contest/520/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    cin.ignore();

    string s; cin >> s;
    set<char> v;

    for(int i = 0; i < s.size(); i++)
        v.insert(s[i]);

    for(char i = 'a'; i <= 'z'; i++)
        if(v.find(i) == v.end() && v.find(toupper(i)) == v.end()) {
            cout << "NO\n";
            return 0;
        }
    
    cout << "YES\n";
    return 0;
}