#include <bits/stdc++.h>

using namespace std;

bool vazio(vector<int> v){
    for(int i = 0; i < v.size(); i++)
        if(v[i] != 0) return true;
    return false;
}

int main(){
    vector<int> v;
    int n; 
    cin >> n;

    for(int i = 1; i <= n; i++)
        v.push_back(i);

    int k = 1;
    while(v.size() > 0){
        if(k > v.size()) k = k - v.size();
        else if(v[k] == 0){
            while(true){
                k+=2;
                if(k == v.size())
                    k = 1;
                if(v[k] != 0){
                    cout << v[k] << " ";
                    v[k] == 0;
                    break;
                }
            }
        } else if(v[k] != 0){
            cout << v[k] << " ";
            v[k] == 0;
        }
        k+=2;
    }
    return 0;
}