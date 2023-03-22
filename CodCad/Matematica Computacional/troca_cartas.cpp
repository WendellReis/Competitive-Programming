#include <bits/stdc++.h>

using namespace std;

void insert(vector<int> &v, int k){
    if(v.size() == 0) {v.push_back(k); return;}

    for(int i = 0; i < v.size(); i++)
        if(v[i] == k) return;

    v.push_back(k);
}

int main(){
    int n, m, c;
    vector<int> a,b;

    for(int i = 0; i < n; i++){
        cin >> c;
        insert(a,c);

    }for(int i = 0; i < m; i++){
        cin >> c;
        insert(b,c);
    }

    int q = 0;
    bool v = true;
    for(int i = 0; i < n; i++){
        v = true;
        for(int j = 0; j < m; j++)
            if(a[i] == b[j]){
                v = false;
                break;
            }
        if(v) q++; 
    }

    cout << q << endl;
    return 0;
}