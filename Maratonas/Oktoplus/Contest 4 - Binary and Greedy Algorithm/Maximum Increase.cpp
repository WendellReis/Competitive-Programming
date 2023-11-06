#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int max_tam = 1, tam = 1;
    for(int i = 1; i < n; i++){
        if(v[i] > v[i-1])
            tam++;
        else{
            max_tam = max(max_tam,tam);
            tam = 1;
        }
    }
    cout << max(max_tam,tam) << "\n";
    return 0;
}