#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n;
    cin >> n;

    ll a,b;
    while(n > 0){
        cin >> a >> b;
        if((a + b)%3 != 0 || a > 2*b || b > 2*a)
            cout << "NO\n"; 
        else
            cout << "YES\n";      
        n--;
    }
    return 0;
}