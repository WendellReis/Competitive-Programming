#include <bits/stdc++.h>
 
using namespace std;
#define ull unsigned long long
 
ull absUll(ull a, ull b){
    if(a > b)
        return a - b;
    return b-a;
}
 
int main(){
    ull n,m,k,v; cin >> n >> m >> k;
    ull size[n], apart[m];
    
    for(ull i = 0; i < n; i++)
        cin >> size[i];
 
    for(ull i = 0; i < m; i++)
        cin >> apart[i];
    sort(size, size + n);
    sort(apart, apart + m);
 
    ull count = 0;
    for(ull i = 0, pos = 0; i < n && pos < m; i++){
        while(absUll(size[i],apart[pos]) > k && size[i] > apart[pos] && pos + 1 < m)
            pos++;
        if(absUll(size[i],apart[pos]) <= k){
            count++;
            pos++;
        }
    }
    cout << count << "\n";
    return 0;
}