#include <bits/stdc++.h>

using namespace std;

int main() {

    float a,b;

    while(cin >> a >> b) {
        float menor = a < b ? a : b;
        float maior = a > b ? a : b;
        float vM = round((menor/2*100));
        vM /= 100;
        cout.precision(2);
        cout << fixed;
        cout << vM + maior << endl;
    }

    return 0;
}