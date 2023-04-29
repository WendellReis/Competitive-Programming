#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n, a, b;
    bool s = false;
    cin >> n;

    while(n > 0){
        cin >> a >> b;

        if(s) cout << "YES" << endl;
        else cout << "NO" << endl;
        n--;
    }
    return 0;
}