#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool primo(ll x){
    if(x == 1)  return 0;
    for(int i = 2; i*i <= x; ++i){ 
        if(x % i == 0){ 
        return 0;
        }
    }
    return 1;
}
int main(){
    bool s;
    ll n;
    while(cin >> n){
        s = false;
        if(n%2 == 1){
            if(primo(n-2))
                s = true;
        } else{
            for(ll i = 3; i <= n; i+=2)
                if(primo(i))
                    if(primo(n-i)){
                        s = true;
                        break;
                    }
        }
        if(s) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}