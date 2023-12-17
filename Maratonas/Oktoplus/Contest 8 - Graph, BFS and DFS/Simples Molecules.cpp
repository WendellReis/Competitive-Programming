#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c; cin >> a >> b >> c;

    int s = a+b+c;
    if(s%2 != 0) {
        cout << "Impossible\n";
        return 0;
    }
        
    int x = s/2 - c;
    int y = s/2 - a;
    int z = s/2 - b;

    if(x >= 0 && y >= 0 && z >= 0)
        cout << x << " " << y << " " << z << "\n";
    else
        cout << "Impossible\n";
    return 0;
}