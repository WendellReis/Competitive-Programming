#include <bits/stdc++.h>

using namespace std;

bool primo(int n);

int main(){
    bool s;
    int n;
    while(cin >> n){
        s = false;
        for(int i = 2; i < n; i++)
        if(primo(i))
            for(int j = i; j+i <= n; j++)
                if(primo(j) && n == j+i) {s=true;break;}
        if(s) cout << 1 << endl;
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

