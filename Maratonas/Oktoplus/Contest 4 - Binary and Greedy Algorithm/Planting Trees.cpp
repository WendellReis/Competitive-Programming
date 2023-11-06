#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,v; cin >> n;
    vector<int> vet;

    for(int i = 0; i < n; i++){
        cin >> v;
        vet.push_back(v);
    }

    sort(vet.rbegin(),vet.rend());

    int temp = 0;
    for(int i = 1; i <= n; i++)
        temp = max(temp,vet[i-1]+i);
    cout << temp+1 << "\n";
    return 0;
}