#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string,pair<double,int>> a, pair<string,pair<double,int>> b){
    if(a.second.first>b.second.first) return 1;
    else if(a.second.first==b.second.first&&a.first<b.first) return 1;
    return 0;
}

int main(){
    int n,k,m; cin >> n >> k;

    map<string,pair<double,int>> ma;
    set<string> s;
    string u;

    for (int i = 0; i < n; i++){
        cin.ignore();
        cin >> u >> m;
        if(s.find(u)==s.end()){
            s.insert(u);
            ma[u]=make_pair(1.0,0);
        }
        if(m>=ma[u].second){
            ma[u].first+=0.25;
            ma[u].second=m+k;
        }
    }
    
    vector<pair<string,pair<double,int>>> v(ma.begin(),ma.end());
    sort(v.begin(),v.end(),cmp);

    cout << "--Rank do Nepscord--\n";

    for (int i = 0; i < 3; i++){
        cout << "#" << i+1 << ". ";
        if(v.size()>i)
            cout << v[i].first << " - Nivel " << int(v[i].second.first) << '\n';
    }

    return 0;
}