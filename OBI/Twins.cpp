#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    int v[n],sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++)
        cin >> v[i], sum1+=v[i];
    
    sort(v,v+n);
    int q = 0;
    for(int i = n-1; i >= 0 && sum2 < sum1; i--)
        sum2+=v[i],sum1-=v[i],q++;
    
    cout << q << "\n";
    return 0;
}