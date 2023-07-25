#include <bits/stdc++.h>

using namespace std;

int main(){
    int v,s[] = {1,5,10,25,50,100};
    cin >> v;

    int quant = 0;
    for(int i = 5; i >= 0 && v > 0; i--){
        quant += (int)v/s[i];
        v = v - s[i] * ((int)v/s[i]);
    }
    cout << quant << "\n";
    return 0;
}