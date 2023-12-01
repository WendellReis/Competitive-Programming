#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    long long med = 0;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        med+=v[i];
    }
    
    med/=n;

    int q1 = 0, q2 = 0;
    long long tot = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] < med) {
            q1++;
            tot += med - v[i];
        } else {
            q2++;
            tot += v[i] - med;
        }
    }

    if(q1 >= q2)
        cout << tot + q2 << "\n";
    else
        cout << tot + q1 << "\n";
        
    return 0;
}