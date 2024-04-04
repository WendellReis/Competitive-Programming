#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,v; cin >> n >> v;

    while(n + v != 0) {
        if(n < v)
            cout << "0\n";
        else if(v <= n && n <= 2*v)
            cout << "1\n";
        else {
            double a = -0.5;
            double b = v - 0.5;
            double c = -(n-2*v);

            double sol = (-b - sqrt(b*b - 4*a*c))/(-1);

            if(sol - (int)sol != 0.0 || sol > v)
                cout << "0\n";
            else
                cout << "1\n";
        }

        cin >> n >> v;
    }
    return 0;
}