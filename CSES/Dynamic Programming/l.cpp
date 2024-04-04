#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    while(n) {
        int s1 = 0, s2 = 0, c1 = 0, c2 = 0;

        int a,b; char c;
        cin >> a >> c >> b;
        s1+=a;
        s2+=b;
        c2+=b;

        cin >> a >> c >> b;
        s2+=a;
        s1+=b;
        c1+=b;

        if(s1 > s2) cout << "Time 1\n";
        else if(s2 > s1) cout << "Time 2\n";
        else if(c1 > c2) cout << "Time 1\n";
        else if(c2 > c1) cout << "Time 2\n";
        else cout << "Penaltis\n";

        n--;
    }

    return 0;
}