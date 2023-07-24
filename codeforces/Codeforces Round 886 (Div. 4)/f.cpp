#include <bits/stdc++.h>

using namespace std;

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t > 0){
        int a,n; cin >> n;
        int vet[n+1] = {0};

        for(int i = 0; i < n; i++){
            cin >> a;
            for(int j = a; j <= n; j+=a)
                vet[j]++;
        }

        int max_q = vet[0];
        for(int i = 1; i <= n; i++)
            max_q = max(max_q,vet[i]);

        cout << max_q << "\n";
        t--;
    }
    return 0;
}