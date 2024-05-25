/*
    CSES Problem Set
    https://cses.fi/problemset/task/1084
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,m,k; cin >> n >> m >> k;

    vector<int> ap(n),apt(m);
    for(int i = 0; i < n; i++)
        cin >> ap[i];
    for(int i = 0; i < m; i++)
        cin >> apt[i];

    sort(ap.begin(),ap.end());
    sort(apt.begin(),apt.end());

    int i = 0, j = 0, count = 0;
    while(i < n && j < m) {
        if(abs(ap[i] - apt[j]) <= k) {
            i++;
            j++;
            count++;
        } else if(ap[i] < apt[j])
            i++;
        else
            j++;
    }

    cout << count << "\n";
    return 0;
}
