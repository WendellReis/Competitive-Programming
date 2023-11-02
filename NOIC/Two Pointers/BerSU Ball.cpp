/*
    Problem Name: BerSU Ball
    Problem Link: https://codeforces.com/problemset/problem/489/B
    Author: Wendell R. M. Matias (Foxtrotbr)
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n;

    vector<int> b(n);
    for(int i = 0; i < n; i++)
        cin >> b[i];
    
    cin >> m;
    vector<int> g(m);
    for(int i = 0; i < m; i++)
        cin >> g[i];

    sort(b.begin(),b.end());
    sort(g.begin(),g.end());

    int i = 0, j = 0, count = 0;
    while(i < n && j < m){
        if(abs(b[i] - g[j]) < 2){
            count++;
            i++;
            j++;
        } else if(b[i] > g[j])
            j++;
        else
            i++;
    }

    cout << count << "\n";
    return 0;
}