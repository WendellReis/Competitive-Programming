#include <bits/stdc++.h>

using namespace std;

int main() {

    int a,b,c;
    cin >> a >> b >> c;

    double delta = b*b - (4*a*c);

    if(delta < 0)
        cout << "Nulo\n";
    else {
        double raiz1 = ((-b) - pow(delta, 0.5)) / (2*a);
        double raiz2 = ((-b) + pow(delta, 0.5)) / (2*a);
        cout.precision(2);
        cout << fixed;
        cout << raiz2 << " " << raiz1 << endl;
    }

    return 0;
}