#include <bits/stdc++.h>

using namespace std;

int amigo[10001], inimigo[10001];

int findAmigo(int x) {
    if(x == amigo[x]) return x;
    return amigo[x] = findAmigo(amigo[x]);
}

int findInimigo(int x) {
    if(x == inimigo[x]) return x;
    return inimigo[x] = findInimigo(inimigo[x]);
}

int main() {
    int n; cin >> n;

    for(int i = 0; i < n; i++)
        amigo[i] = i, inimigo[i] = n+i;
    
    int c,a,b; cin >> c >> a >> b;
    cout << amigo[a] << findAmigo(a);
    while(c != 0 || a != 0 || b != 0) {
        int a1 = findAmigo(a), a2 = findInimigo(a);
        int b1 = findAmigo(b), b2 = findInimigo(b);
        
        if(c == 1) {
            if(a1 == b2) cout << "-1\n";
            else {
                amigo[a1] = amigo[b1];
                inimigo[a2] = inimigo[b2];
            }
        } else if(c == 2) {
            if(a1 == b1) cout << "-1\n";
            else {
                amigo[a1] = amigo[b2];
                inimigo[a2] = inimigo[b1];
            }
        } else if(c == 3) {
            if(a1 == b1) cout << "1\n";
            else cout << "0\n";
        } else if(c == 4) {
            if(a1 == b2) cout << "1\n";
            else cout << "0\n";
        }

        cin >> c >> a >> b;
    }

    return 0;
}