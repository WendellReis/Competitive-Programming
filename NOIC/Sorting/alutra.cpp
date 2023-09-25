#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t > 0){
        int n; cin >> n;
        int h[n];
        for(int i = 0; i < n; i++)
            cin >> h[i];

        sort(h,h+n);
        for(int i = 0; i < n; i++)
            cout << h[i] << " ";
        
        cout << "\n";
        t--;
    }
    return 0;
}