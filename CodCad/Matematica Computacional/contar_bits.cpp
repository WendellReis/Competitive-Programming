#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    int q = 0;
    while(n > 0){
        n-=pow(2,(int)log2(n));
        q++;
    }
    cout << q << endl;
    return 0;
}