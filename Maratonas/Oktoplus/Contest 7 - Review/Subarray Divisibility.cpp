#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    vector<int> v(n+1); v[0] = 0;
    for(int i = 1; i <= n; i++) {
        cin >> v[i];

        v[i] = (v[i] + v[i-1])%n;
        if(v[i] < 0)
            v[i]+=n;
    }

    long long count = 0;
    vector<int> freq(n,0); freq[0] = 1;
    for(int i = 1; i <= n; i++) {
        count+=freq[v[i]];
        freq[v[i]]++;
    }

    cout << count << "\n";
    return 0;
}