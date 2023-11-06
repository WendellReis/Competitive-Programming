#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t > 0){
        int n; cin >> n;

        vector<int> vet(n);
        int m = INT32_MAX;
        for(int i = 0; i < n; i++){
            cin >> vet[i];
            m = min(vet[i],m);
        }

        long long count = 0;
        for(int i = 0; i < n; i++)
            count+=(vet[i]-m);
        
        cout << count << "\n";
        t--;
    }
    return 0;
}