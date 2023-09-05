#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,h; cin >> n >> h;

    int a, count = n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a > h) count++;
    }

    cout << count << "\n";
    return 0;
}