#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n,k; cin >> t;

    while(t > 0){
        cin >> n >> k;

        vector<int> prefix(n+1); prefix[0] = 0;
        for(int i = 1; i <= n; i++){
            cin >> prefix[i];
            prefix[i]+=prefix[i-1];
        }

        if(k >= n)
            cout << prefix[n] << "\n";
        else{
            int max_g = 0;
            for(int i = k,j = 0; i <= n; i++, j++)
                max_g = max(max_g,prefix[i]-prefix[j]);
            cout << max_g << "\n";
        }
        
        t--;
    }
    return 0;
}