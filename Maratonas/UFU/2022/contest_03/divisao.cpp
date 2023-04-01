#include <bits/stdc++.h>

using namespace std;

int main(){
    int c,l, tam = 1;
    cin >> c >> l;
    for(int i = 1; i*i <= c*l; i++)
        if(c%i == 0 && l%i == 0) tam = (c*l)/(i*i);
    cout << tam << endl;
    return 0;
}