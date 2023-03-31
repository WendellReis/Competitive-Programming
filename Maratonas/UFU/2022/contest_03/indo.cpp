#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c, d = 1;
    cin >> a >> b >> c;
    for(int i = 2; i <= a && i <= b && i <= c; i++)
        if(a%i == 0 && b%i == 0 && c%i == 0) d = i;
    cout << d << endl;
    return 0;
}