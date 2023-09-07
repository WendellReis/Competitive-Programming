#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    int aux = 0, v, count = 0;
    for(int i = 0; i < n; i++){
        cin >> v;
        if(v != aux){
            count++;
            aux = v;
        }
    }
    cout << count << "\n";
    
    return 0;
}