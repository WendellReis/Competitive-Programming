#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long n; cin >> n;
    double lg = log2(n+1);

    if(lg - (int)(lg) == 0 && n!= 0)
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}