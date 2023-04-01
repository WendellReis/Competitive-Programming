#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    bool s;
    while(cin >> n){
        s = false;
        int i = 0,j=0;
        while(i <= n) {
            if(n <= (j*j)+(i*i)) {
                if(n == (j*j)+(i*i)) {
                    s = true;
                    break;
                }
            }
            j++;
            if(j > n) {
                i++;
                j=i;
            }
        }
        if(s) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}