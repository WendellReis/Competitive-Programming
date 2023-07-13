#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, quant = 0; cin >> n;

    quant+=n/100;
    n-=100 * (int)(n/100);
    quant+=n/50;
    n-=50 * (int)(n/50);
    quant+=n/25;
    n-=25 * (int)(n/25);
    quant+=n/10;
    n-=10 * (int)(n/10);
    quant+=n/5;
    n-=5 * (int)(n/5);
    quant+=n;

    cout << quant << endl;
    return 0;
}