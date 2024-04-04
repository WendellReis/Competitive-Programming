#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k,v; cin >> n >> k;

    long long sum = 0;
    for(int i = 0; i < 2*n; i++)
        cin >> v, sum+=v;
    
    cout << (int)k/sum << "\n";
    return 0;
}