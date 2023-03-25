#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    vector<pair<int,int>> v;
    while(cin >> n){
        if(v.size() == 0) v.push_back(make_pair(n,1));
        else{
            bool s = true;
            for(int i = 0; i < v.size(); i++)
                if(n == v[i].first){
                    v[i].second++;
                    s = false; 
                    break;
                }
            if(s) v.push_back(make_pair(n,1));
        }
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
        cout << v[i].first << " " << v[i].second << endl;
    return 0;
}