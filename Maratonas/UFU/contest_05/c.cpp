#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int div = 2;
    int minDC = 1;
    int menor = a > b ? b : a;
    while(div <= menor) {


        if(a%div == 0 && b%div == 0) {
            a/= div; b/=div;
            minDC *= div;
        } else {
            menor = a > b ? b : a;
            div++;
        }
    }

    cout << minDC << endl;
    return 0;
}