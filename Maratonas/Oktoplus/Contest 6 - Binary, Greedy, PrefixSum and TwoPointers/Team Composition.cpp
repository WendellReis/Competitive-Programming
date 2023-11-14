#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    ll a,b;

    while(t > 0){
        cin >> a >> b;
        ll k = (a+b)/4;
        if(k > a || k > b)
            cout << min(a,b) << "\n";
        else
            cout << k << "\n";
        t--;
    }
    return 0;
}