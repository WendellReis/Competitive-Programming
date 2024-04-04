#include <bits/stdc++.h>

using namespace std;

#define INF INT32_MAX

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n,k,x; cin >> n >> k >> x;
        
        vector<int> v(n);
        int sum = 0;
        for(int i = 0; i < n; i++)
            cin >> v[i], sum+=v[i];

        sort(v.rbegin(),v.rend());

        for(int i = 1; i <= k+x-n; i++)
            v.push_back(0);

        cout << "v: ";
        for(int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << "\n";
        for(int i = 0; i < x; i++)
            sum-=2*v[i];
        cout << "s: " << sum << "\n";
        int maxSum = sum;
        for(int i = 0; i < k; i++) {
            sum = sum + v[i] - v[x+i];
            maxSum = max(maxSum,sum);
        }

        cout << maxSum << "\n";
    }
    
    return 0;
}