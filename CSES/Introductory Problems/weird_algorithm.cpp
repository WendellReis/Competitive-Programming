#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    while(n != 1){
        cout << n << " ";
        if(n%2) n = n*3 + 1;
        else n/=2;
    }
    cout << n << endl;
    5;
    return 0;
}