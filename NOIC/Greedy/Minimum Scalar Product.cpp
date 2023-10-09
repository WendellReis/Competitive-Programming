#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t, k = 1; cin >> t;

    while(k <= t){
        long long n; cin >> n;

        vector<long long> v1,v2;
        long long v;
        for(long long i = 0; i < n;i++){
            cin >> v;
            v1.push_back(v);
        }
        for(long long i = 0; i < n;i++){
            cin >> v;
            v2.push_back(v);
        }

        sort(v1.begin(),v1.end()); sort(v2.begin(),v2.end());

        long long prod = 0;
        for(long long i = 0; i < n; i++)
            prod+=(v1[i]*v2[n-1-i]);
        
        cout << "Case #" << k << ": " << prod << "\n";
        k++;
    }
    return 0;
}