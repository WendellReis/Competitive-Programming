#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long

int main(){
    ull t;
    cin >> t;
    for(ull n = 1; n <= t; n++)
        cout << (n*n * (n*n-1))/2 - 4*(n-1)*(n-2) << "\n";
    return 0;
}