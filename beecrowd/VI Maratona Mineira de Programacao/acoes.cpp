#include <bits/stdc++.h>

using namespace std;

int main(){
    int d, i, x, f;
    cin >> d >> i >> x >> f;

    if(f%2 == 0) cout << i; //varicoes positivas = variacoes negativas
    else if(d%2) cout << i + x;
    else cout << i - x;
    cout << endl;
    return 0;
}