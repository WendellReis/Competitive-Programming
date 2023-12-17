#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    long long x; cin >> x;

    int q = 0, d;
    char c;
    for(int i = 0; i < n; i++) {
        cin >> c >> d;

        if(c == '+')
            x+=d;
        else if(x < d)
            q++;
        else
            x-=d;
    }

    cout << x << " " << q << "\n";
    return 0;
}