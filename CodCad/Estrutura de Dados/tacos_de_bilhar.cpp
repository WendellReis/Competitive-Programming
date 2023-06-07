#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    int c[n];
    for(int i = 0; i < n; i++)
        cin >> c[i];
    sort(c, c + n);

    int quant = 0, seq = 1;
    for(int i = 1; i < n; i++){
        if(c[i] == c[i-1])
            seq++;
        else{
            quant += seq + seq%2;
            seq = 1;
        }
    }
    quant += seq + seq%2;
    cout << quant << "\n";
    return 0;
}