#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;

    int q = 1;
    for(int i = 2; i <= n/2; i++){
        if(q > 2) break;
        if(n%i == 0){
            n/=i;
            q++;
            i--;
        }
    }

    if(q == 2) cout << 1 << endl;
    else cout << 0 << endl;
    
    return 0;
}