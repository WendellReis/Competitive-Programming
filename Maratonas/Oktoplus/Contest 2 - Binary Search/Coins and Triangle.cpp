#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long t,n; cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;
        cout << (unsigned long long)((-1+sqrt(1+8*n))/2) << "\n";
    }
    return 0;
}