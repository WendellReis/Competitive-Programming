/*
    Problem Name: Playlist
    Problem Link: https://cses.fi/problemset/task/1141
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    map<int,int> pos;
    int mx = 1;
    for(int i = 0, j = 0; i < n; i++){
        if(pos.find(v[i]) != pos.end()){
            mx = max(mx,(int)pos.size());
            while(j <= pos[v[i]]){
                pos.erase(v[j]);
                j++;
            }
        }
        pos[v[i]] = i;
    }

    cout << max(mx,(int)pos.size()) << "\n";
    return 0;
}