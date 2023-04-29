#include <bits/stdc++.h>

using namespace std;

unsigned long fat(int k){
    if(k < 2) return 1;
    return k*fat(k-1); 
}

int main(){
    int a,b,c;
    while(cin >> a >> b >> c)
        cout << fat(a+b+c) << endl;
    return 0;
}