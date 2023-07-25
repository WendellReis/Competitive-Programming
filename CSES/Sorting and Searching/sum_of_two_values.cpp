#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x,a; cin >> n >> x;
    
    pair<int,int> v[n];
    for(int i = 0; i < n; i++){
        cin >> a;
        v[i] = make_pair(a,i);
    }

    sort(v,v+n);
    for(int i = 0; i < n; i++)
        cout << v[i].first << " " << v[i].second << "\n";

    for(int i = 0; i < n-1;i++){
        if(v[i].first + v[i+1].first == x){
            cout << v[i].second << v[i+1].second << "\n";
            return 0;
        } else if(v[i].first + v[i+1].first > x)
            break;
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}