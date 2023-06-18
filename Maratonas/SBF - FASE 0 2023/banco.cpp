#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long a,b,c; cin >> a >> b >> c;
    char k; cin >> k;

    if(k == 'A')
        cout << a + (int)(3*b/2) + (int)(5*c/2) << "\n";
    else if(k == 'B')
        cout << b + (int)(2*a/3) + (int)(5*c/3) << "\n";
    else
        cout << c + (int)(2*a/5) + (int)(3*b/5) << "\n";
    return 0;
}