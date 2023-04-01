#include <bits/stdc++.h>

using namespace std;

int main() {

    float a,b,c,d,e,f;

    cin >> a >> b >> c >> d >> e >> f;

    float x,y;

    y = (d*c - a*f) / (d*b-a*e);
    x = (f- e*y) / d;

    cout << fixed;
    cout.precision(2);
    cout << x << " " << y << endl;

    return 0;
}