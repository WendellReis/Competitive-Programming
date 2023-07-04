#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int c,n; cin >> c >> n;
    
    map<string, long long> update;
    pair<string, long long> v;
    vector<pair<string, long long>> apps;
    for(int i = 0; i < c; i++){
        cin >> v.first >> v.second;
        apps.push_back(v);
    }

    for(int i = 0; i < n; i++){
        cin >> v.first >> v.second;
        update.insert(v);
    }

    sort(apps.begin(),apps.end());
    pair<string, long long> ant;
    ant.first = apps[0].first;
    ant.second = apps[0].second;

    for(int i = 1; i < apps.size(); i++){
        if(apps[i].first == ant.first)
            ant.second = max(apps[i].second,ant.second);
        else{
            if(update.find(ant.first) != update.end())
                if(update[ant.first] > ant.second)
                    cout << ant.first << " " << update[ant.first] << "\n";

            ant.first = apps[i].first;
            ant.second = apps[i].second;
        }
    }

    if(update.find(ant.first) != update.end())
        if(update[ant.first] > ant.second)
            cout << ant.first << " " << update[ant.first] << "\n";

    return 0;
}