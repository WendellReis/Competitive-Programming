#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    ll n,k;
    while(t > 0){
        cin >> n >> k;
        ll div = k/(n-1);
        ll resto = k%(n-1);

        if(resto == 0)
            cout << n*div-1 << "\n";
        else
            cout << n*div+resto << "\n";
        t--;
    }
    return 0;
}