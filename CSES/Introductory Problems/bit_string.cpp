#include <bits/stdc++.h>
#define ll long long
#define max 1000000007

using namespace std;

string mult(string s);

int main(){
    int n;
    cin >> n;
    if(n < 1) {cout << 0 << endl; return 0;}
    ll pot = 1;

    for(int i = 0; i < n; i++){
        pot*=2;
        if(pot > max)pot = pot%max;
    }
    cout << pot << endl;
    return 0;
}