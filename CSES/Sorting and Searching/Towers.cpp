#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    vector<pair<int,int>> v(n);
    for(int i = 0,k; i < n; i++)
        cin >> k, v[i] = {k,i};

    if(v.size() == 1) {
        cout << "1\n";
        return 0;
    }
    
    sort(v.begin(),v.end());

    v.push_back({-1,-1});
    bool s;
    if(v[0].S < v[1].S) s = true;
    else s = false;
    
    int count = 1;
    for(int i = 2; i < n; i++) {
        if(s && v[i-1].S > v[i].S) {
            count++;
            if(v[i].S < v[i+1].S) s = true;
            else s = false;
        } else if(!s && v[i-1].S < v[i].S) {\
            count++;
            if(v[i].S < v[i+1].S) s = true;
            else s = false;
        }
    }

    cout << count << "\n";
    return 0;
}