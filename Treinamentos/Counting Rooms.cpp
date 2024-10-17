#include <bits/stdc++.h>

using namespace std;

void rooms(vector<string> &v, int i, int j){
    if(!(i<0||i>=v.size()||j<0||j>=v[0].size()||v[i][j]!='.')){
        v[i][j]='#';
        rooms(v,i,j+1);
        rooms(v,i+1,j);
        rooms(v,i,j-1);
        rooms(v,i-1,j);
    }
}

int main(){
    int n,m,tot=0; cin >> n >> m;
    vector<string> v(n);

    for(auto &i : v)
        cin >> i;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++){
            if(v[i][j]=='.'){
                tot++;
                rooms(v,i,j);
            }
        }

    cout << tot << '\n';

    return 0;
}