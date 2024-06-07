#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,m; cin >> n >> m;

    cin.ignore();
    string s; cin >> s;
    s = s + s;

    int l = 0, count = 0, vezes = 1;
    set<int> q;
    queue<int> fila;
    for(int i = 0; i < m; i++)
        if(s[i] == '0')
            count++;
    q.insert(count);
    fila.push(count);

    while(l < n*m) {
        vezes++;
        if(s[l] == '0')
            count--;
        if(s[l+m-1] == '0')
            count++;
        
        if(q.find(count) != q.end()) {
            cout << "N\n";
            return 0;
        }
        if(vezes >= m) {
            q.erase(fila.front());
            fila.pop();
        }
        fila.push(count);
        q.insert(count);
        l++;
    }

    cout << "S\n";
    return 0;
}