#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x; cin >> n >> x;

    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].F;
        v[i].S = i+1;
    }

    sort(v.begin(),v.end());
    int l = 0, r = n-1;
    while(l < r){
        if(v[l].F + v[r].F > x)
            r--;
        else if(v[l].F + v[r].F < x)
            l++;
        else{
            cout << v[l].S << " " << v[r].S << "\n";
            return 0;
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}