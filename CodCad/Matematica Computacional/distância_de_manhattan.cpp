#include <bits/stdc++.h>

using namespace std;

int main(){
    int xm,xr,ym,yr; cin >> xm >> ym >> xr >> yr;
    cout << abs(xm - xr) + abs(ym - yr);
    return 0;
}