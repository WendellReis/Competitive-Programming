#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    m = 4*60 - m;

    int t = 0;
    for(int i = 1; i <= n; i++){
        if(t + 5*i > m){
            cout << i-1 << "\n";
            return 0;
        }
        t+=5*i;
    }
    cout << n << "\n";
    return 0;
}