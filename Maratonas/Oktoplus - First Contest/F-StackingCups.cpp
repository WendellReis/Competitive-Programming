#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s1,s2;
    vector<pair<int,string>> v;
    for(int i = 0; i < n; i++){
        cin >> s1 >> s2;
        if(s1[0] >= '0' && s1[0] <= '9')
            v.push_back(make_pair(stoi(s1)/2,s2));
        else
            v.push_back(make_pair(stoi(s2),s1));
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < n; i++)
        cout << v[i].second <<"\n";
    return 0;
}