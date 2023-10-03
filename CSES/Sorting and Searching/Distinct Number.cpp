/*
    CSES Problem Set
    https://cses.fi/problemset/task/1621
*/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int t;
    cin >> t;

    ll n;
    set<ll> list;
    for(int i = 0; i < t; i++){
        cin >> n;
        list.insert(n);
    }

    cout << list.size() << endl;
    return 0;
}