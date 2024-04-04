#include <iostream>

using namespace std;

#define ll long long

int contDif(ll x, ll y) {
    int count = 0;
    ll xor_result = x ^ y;
    while (xor_result) {
        count += xor_result & 1;
        xor_result >>= 1;
    }
    return count;
}

int main() {
    ll x, y;
    while (cin >> x >> y && (x != 0 || y != 0)) {
        cout << contDif(x, y) << "\n";
    }
    return 0;
}