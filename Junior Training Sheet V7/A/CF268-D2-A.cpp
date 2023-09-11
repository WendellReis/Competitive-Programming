#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector<pair<int,int>> t;
    int v1,v2;
    for(int i = 0; i < n; i++){
        cin >> v1 >> v2;
        t.push_back({v1,v2});
    }

    int count = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if(t[i].second == t[j].first)
                count++;

    cout << count << "\n";
    return 0;
}