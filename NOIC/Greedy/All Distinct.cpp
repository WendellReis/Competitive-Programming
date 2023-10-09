#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t > 0){
        int n,v; cin >> n;
        
        vector<int> vet;
        for(int i = 0; i < n; i++){
            cin >> v;
            vet.push_back(v);
        }

        sort(vet.begin(),vet.end());
        int tot = 0;
        for(int i = 1; i < n; i++)
            if(vet[i] == vet[i-1]){
                tot++;
                i++;
            }
        if(tot - (int)tot == 0)
            cout << n-tot*2 << "\n";
        else
            cout << n-tot*2-2 << "\n";
        t--;
    }
    return 0;
}