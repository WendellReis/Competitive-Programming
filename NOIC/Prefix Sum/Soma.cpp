#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,v,k, sum = 0; cin >> n >> k;
    vector<long long> prefix(n+1,0);

    for(int i = 0; i < n; i++){
        cin >> v;
        prefix[i+1]=prefix[i]+v;
    }
    
    int count = 0;
    int i = 1, j = 0;
    while(i <= n){
        sum = prefix[i]-prefix[j];
        if(sum <= k){
            if(sum == k)
                for(int a = j; a < i && prefix[i]-prefix[a] == k; a++)
                    count++;
            i++;
        } else
            j++;
    }
    cout << count << "\n";
    return 0;
}