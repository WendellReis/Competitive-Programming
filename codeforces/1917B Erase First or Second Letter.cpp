#include <bits/stdc++.h>

using namespace std;

void solve(string s, set<string>& st){
    if(s.size() == 0)
        return;
    
    st.insert(s);

    string aux = s;
    s.erase(s.begin());
    if(aux.size() > 1) {
        aux.erase(aux.begin()+1);
        solve(aux,st);
    }
    solve(s,st);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        cin.ignore();
        string s; cin >> s;
        set<string> st;

        solve(s,st);
        cout << st.size() << "\n";
    }

    return 0;
}