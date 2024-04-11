//Problem Link: https://neps.academy/br/exercise/254

#include <bits/stdc++.h>

using namespace std;

#define F first 
#define S second

int main() {
    int p,s; cin >> p >> s;

    pair<int,int> inter[s];
    for(int i = 0; i < s; i++)
        cin >> inter[i].F >> inter[i].S;

    vector<pair<int,int>> result;
    int ini = inter[0].F, fim = inter[0].S;
    for(int i = 1; i < s; i++) {
        if(fim < inter[i].F) {
            result.push_back({ini,fim});
            ini = inter[i].F;
            fim = inter[i].S;
        } else
            fim = max(inter[i].S,fim);
    }
    result.push_back({ini,fim});

    for(int i = 0; i < result.size(); i++)
        cout << result[i].F << " " << result[i].S << "\n";
    return 0;
}