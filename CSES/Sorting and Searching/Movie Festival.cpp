/*
    CSES Problem Set
    https://cses.fi/problemset/task/1629
*/
#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second

int main(){
    int n,a,b; cin >> n;

    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back({b,a});
    }

    sort(v.begin(),v.end());

    pair<int,int> ant = {0,0};
    int count = 0;
    for(int i = 0; i < n; i++)
        if(v[i].S >= ant.F){
            ant = v[i];
            count++;
        }
    cout << count << "\n";
    return 0;
}