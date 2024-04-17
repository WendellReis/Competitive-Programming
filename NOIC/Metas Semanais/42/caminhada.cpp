#include <bits/stdc++.h>

using namespace std;

int main() {
    long long d,x = 0,y = 0;
    cin >> d;

    long long dif = d;

    while(x <= sqrt(d)) {
        y = sqrt(d-x*x);
        dif = min(dif,abs(d - x*x - y*y));
        x++;
    }

    cout << min(dif,(x+1)*(x+1)-d) << "\n";
    return 0;
}