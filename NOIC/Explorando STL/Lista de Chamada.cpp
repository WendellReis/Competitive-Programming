//Problem Link: https://neps.academy/br/exercise/546

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio();
    cin.tie(0);

    int n,k; cin >> n >> k;
    cin.ignore();

    string s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    
    sort(s,s+n);

    cout << s[k-1] << "\n";
    return 0;
}