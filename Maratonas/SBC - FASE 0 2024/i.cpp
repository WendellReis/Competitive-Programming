#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m; cin >> n >> m;

    cin.ignore();
    string s; cin >> s;
    s = s + s;

    map<int,string> quant;
    int count = 0;
    string r = "";
    for(int i = 0; i < m; i++) {
        r.push_back(s[i]);
        if(s[i] == '0')
            count++;
    }

    quant.insert({count,r});
    for(int i = 1; i < n; i++) {
        if(r[0] == '0')
            count--;
        r.erase(0,1);
        if(s[i+m-1])
    }

    cout << "S\n";
    return 0;
}