/*
    CSES Problem Set
    https://cses.fi/problemset/task/1640
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x; cin >> n >> x;;

    long long v;
    vector<int> r;
    map<int,int> m;
    for(int i = 0; i < n; i++){
        cin >> v;
        if(v - (double)x/2 == 0)
            r.push_back(i+1);
        else
            m[v] = i+1;
    }

    if(r.size() >= 2){
        cout << r[0] << " " << r[1] << "\n";
        return 0;
    }

    for (map<int,int>::iterator it=m.begin(); it!=m.end(); ++it){
        if(m.find(x - it->first) != m.end()){
            cout << it->second << " " << m[x - it->first] << "\n";
            return 0;
        }
    }

    cout << "IMPOSSIBLE\n";
    return 0;
}