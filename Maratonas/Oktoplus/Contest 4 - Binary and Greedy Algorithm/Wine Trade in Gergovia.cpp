#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    while(n != 0){
        vector<int> vet(n);
        for(int i = 0; i < n; i++)
            cin >> vet[i];
        
        long long sum = 0, at = 0;
        for(int i = 0; i < n; i++){
            at+=vet[i];
            sum+=abs(at);
        }

        cout << sum << "\n";
        cin >> n;
    }
    return 0;
}