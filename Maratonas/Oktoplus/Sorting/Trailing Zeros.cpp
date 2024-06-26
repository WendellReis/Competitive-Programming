#include <bits/stdc++.h>

using namespace std;

int count5(int k) {
    int count = 0;
    while(k%5 == 0) {
        count++;
        k/=5;
    }
    return count;
}

int main() {
    int n, quant = 0; cin >> n;
    for(int i = 5; i <= n; i+=5)
        quant+=count5(i);
    
    cout << quant << "\n";
    return 0;
}