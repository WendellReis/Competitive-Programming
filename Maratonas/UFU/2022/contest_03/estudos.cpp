#include <bits/stdc++.h>

using namespace std;

bool primo(int n);

int main(){ 
    int x,y, s = 0;
    cin >> x >> y;

    for(int i = x; i <= y; i++)
        if(primo(i)) s+=i;
    cout << s << endl;
    return 0;
}

bool primo(int n){
    int q = 1;
    for(int i = 2; i <= n/2; i++){
        if(n%i == 0) q++;
        if(q > 1) return false;
    }

    if(q == 1) return true;
    return false;
}