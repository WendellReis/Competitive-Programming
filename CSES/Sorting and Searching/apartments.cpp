/*
    CSES Problem Set
    https://cses.fi/problemset/task/1084
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,k; cin >> n >> m >> k;
    int size[n], apart[m];
    
    for(int i = 0; i < n; i++)
        cin >> size[i];

    for(int i = 0; i < m; i++)
        cin >> apart[i];
    sort(size, size + n);
    sort(apart, apart + m);

    int count = 0;
    for(int i = 0, pos = 0; i < n && pos < m; i++){
        while(abs(size[i] - apart[pos]) > k && size[i] > apart[pos] && pos + 1 < m)
            pos++;
        if(abs(size[i] - apart[pos]) <= k){
            count++;
            pos++;
        }
    }
    cout << count << "\n";
    return 0;
}
