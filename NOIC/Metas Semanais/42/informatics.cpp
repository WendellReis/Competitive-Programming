#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t > 0) {
        int n; cin >> n;

        vector<int> aux(n), v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i],aux[i] = v[i];

        sort(v.begin(),v.end());
        int mex = v[n-1]+1;
        set<int> s;
        for(int i = 0; i < n-1; i++) {
            if(v[i+1] != v[i] && v[i+1] != v[i]+1) {
                mex = v[i]+1;
                break;
            }
            s.insert(i);
        }
        
        int l1 = 0,r1 = 0;
        for(int i = 0; i < n && s.size() != 0; i++) {
            r1 = i;
            s.erase(i);
        }

        t--;
    }
    return 0;
}