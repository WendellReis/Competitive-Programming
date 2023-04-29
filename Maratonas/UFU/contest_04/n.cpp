#include <bits/stdc++.h>

using namespace std;

long long fat(int k){
    if(k < 2) return 1;
    return k*fat(k-1); 
}

int main(){
    int a,b,c;
    while(cin >> a >> b >> c)
        cout << 3*fat(a)*2*fat(b)*fat(c) << endl;
    return 0;
}