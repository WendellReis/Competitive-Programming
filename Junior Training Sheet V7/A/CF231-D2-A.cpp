#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b,c; cin >> n;

    int count = 0;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if(a + b + c > 1) count++;
    }

    cout << count << "\n";
    return 0;
}