#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    while(n%7 == 0 && n != 7){
        cout << n << "\n";
        n = (long long)(n/10)*3 + n%10;
    }
    cout << n << "\n";
    return 0;
}