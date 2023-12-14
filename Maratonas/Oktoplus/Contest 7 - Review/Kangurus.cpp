#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(),v.end());
    
    multiset<int> s;
    int count = 0;
    for(int i = n-1; i >= 0; i--) {
        auto it = s.lower_bound(2*v[i]);

        if(it != s.end()){
            s.erase(it);
            count++;
        } else
            s.insert(v[i]);
    }

    cout << n-count << "\n";
    return 0;
}