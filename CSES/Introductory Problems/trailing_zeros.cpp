#include <bits/stdc++.h>
#define ll long long

using namespace std;

int fat5(ll k){
    int q = 0;
    while(k%5==0){
        k/=5;
        q++;
    }
    return q;
}

int main(){
    ll n, q = 0;
    cin >> n;
    for(ll i = 5; i <= n; i+=5)
        q+=fat5(i);
    cout << q << endl;
    return 0;
}