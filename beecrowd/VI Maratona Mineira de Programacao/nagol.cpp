#include <bits/stdc++.h>

using namespace std;

int main(){
    int l,c,x,y;
    cin >> l >> c >> x >> y;
    if((x*c + y)%2 == 0) cout << "Direita";
    else cout << "Esquerda";
    cout << endl;
    return 0;
}