#include <bits/stdc++.h>

using namespace std;

int main() {
    int l,c; cin >> l >> c;
    printf("%d\n%d\n",l*c+(l-1)*(c-1),2*(l+c-2));
    return 0;
}