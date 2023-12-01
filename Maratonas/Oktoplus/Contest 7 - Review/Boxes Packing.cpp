#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,v; cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(),a.end());

    multiset<int> s;
    int count = 0;
    for(int i = n-1; i >= 0; i--) {
        auto it = s.upper_bound(a[i]);

        if(it != s.end()){
            s.erase(it);
            s.insert(a[i]);
            count++;
        } else
            s.insert(a[i]);
    }
    cout << s.size() << "\n";
    return 0;
}