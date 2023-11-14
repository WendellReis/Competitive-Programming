#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k; cin >> n >> k;
    
    int m = 4*60 - k, t = 0;
    for(int i = 1; i <= n; i++){
        if(t + 5*i <= m)
            t+=5*i;
        else{
            cout << i-1 << "\n";
            return 0;
        }
    }
    cout << n << "\n";
    return 0;
}