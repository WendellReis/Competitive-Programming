#include <bits/stdc++.h>

using namespace std;

int n,d;

int f(int x) {
    return abs(n-x + ceil(d/(x+1)));
}

double ternary_search(double l, double r) {
    while (l < r) {
        double m1 = l + (r - l) / 3;
        double m2 = r - (r - l) / 3;
        double f1 = f(m1);
        double f2 = f(m2);
        if (f1 > f2)
            l = m1+1;
        else
            r = m2-1;
    }
    return l;
}

int main() {
    int t; cin >> t;

    while(t--) {
        cin >> n >> d;

        if(d <= n) cout << "YES\n";
        else {
            int x = ternary_search(1,n);

            if(x + ceil(d/(x+1)) <= n) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}