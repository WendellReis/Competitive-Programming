#include <bits/stdc++.h>

using namespace std;

bool primo(int n);

int main(){
    int n, m;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> m;
        if(primo(m)) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}


bool primo(int n){
    if(n < 2) return false;
    int q = 1;
    for(int i = 2; i <= n/2; i++){
        if(n%i == 0) q++;
        if(q > 1) return false;
    }
    return true;    
}