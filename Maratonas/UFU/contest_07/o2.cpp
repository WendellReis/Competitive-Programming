#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> lista;
    bool first = true;
    int n, maior = 0;
    while(cin >> n){
        if(n == 0) break;
        lista.push_back(n);
    }
        
    
    for(int i = 0; i < n; i++){
        int seq = 0;
        for(int j = n; j >= i; j--)
            seq+=lista[j];
        if(first){
            maior = seq;
            first = false;
            continue;
        }
        if(seq > maior)
            maior = seq;
    }
    cout << maior << "\n";
    return 0;
}