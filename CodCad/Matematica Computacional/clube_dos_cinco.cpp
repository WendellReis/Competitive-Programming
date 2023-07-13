#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d,e,f,g,n; cin >> n >> a >> b >> c >> d >> e >> f >> g;
    if(n == a+b+c+g-d-e-f)
        cout << "N\n";
    else
        cout << "S\n";
    return 0;
}