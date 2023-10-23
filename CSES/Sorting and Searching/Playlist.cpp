#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    set<int> p; p.insert(v[0]);
    int quant = 1, quant_max = 1;
    for(int i = 1, j = 1; i < n; i++){
        auto it = p.find(v[i]);
        if(it != p.end())
            j++;
        else{
            p.insert(v[i]);
            quant++;
            quant_max = max(quant_max,quant);
        }
    }
    cout << max(quant_max,quant) << "\n";
    return 0;
}