#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    sort(v.begin(),v.end());
    int count = 0;
    for(int i = 1; i < n-1; i++)
        if(v[i] != v[0] && v[i] != v[n-1])
            count++;

    cout << count << "\n";
    return 0;
}