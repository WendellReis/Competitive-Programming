#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t > 0){
        int n,q; cin >> n >> q;
        
        vector<long long> a;
        long long x,v,ant = 0;

        for(int i = 0; i < n; i++){
            cin >> v;
            a.push_back(v);
        }

        sort(a.rbegin(),a.rend());
        set<pair<long long,int>> sum;
        for(int i = 0; i < n; i++){
            sum.insert({ant+a[i],i+1});
            ant+=a[i];
        }
        
        for(int i = 0; i < q; i++){
            cin >> x;
            auto it = sum.upper_bound({x,0});
            if(it == sum.end())
                cout << "-1\n";
            else
                cout << (*it).second << "\n";
        }
        t--;
    }
    return 0;
}