#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    int v, count = 0, pol = 0;
    for(int i = 0; i < n; i++){
        cin >> v;
        if(v == -1){
            if(pol > 0) pol--;
            else count++;
        } else pol+=v;
    }

    cout << count << "\n";
    return 0;
}