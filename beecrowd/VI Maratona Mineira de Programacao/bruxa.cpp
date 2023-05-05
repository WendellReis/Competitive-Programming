#include <bits/stdc++.h>

using namespace std;

int main(){
    while(1){
    int a, b, r;
    char c;

    cin >> a >> c >> b;
    if(c == '+') r = a + b;
    else if (c == 'x') r = a*b;
    else if (c == '-') r = a + b;
    else r = a/b;

    if(r%7) cout << r;
    else cout << 0;
    cout << endl;
    }
    return 0;
}