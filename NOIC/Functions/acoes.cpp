//Problem Link: https://br.spoj.com/problems/ACOES1MG/

#include <bits/stdc++.h>

using namespace std;

int divisao(int n, int k) {
    if(n <= k)
        return 1;
    return divisao((int)(n/2),k) + divisao(n - (int)(n/2),k);
}

int main() {
    ios_base::sync_with_stdio();
    cin.tie(0);
    
    int n,k;
    
    cin >> n >> k;
    while(n != 0 && k != 0) {
        cout << divisao(n,k) << "\n";
        cin >> n >> k;
    }

    return 0;
}