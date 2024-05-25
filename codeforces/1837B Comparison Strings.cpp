#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t > 0){
        int ini = 1, mx = 1, n;
        string s; 
        cin >> n >> s;

        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1])
                ini++;
            else{
                mx = max(ini,mx);
                ini = 1;
            }
        }
        mx = max(ini,mx);
        cout << mx + 1 << "\n";
        t--;
    }
    return 0;
}