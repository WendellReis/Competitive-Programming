//Problem Link: https://neps.academy/br/exercise/253

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,t; cin >> n >> t;

    cin.ignore();
    string nome; int h;
    vector<pair<int,string>> j;
    for(int i = 0; i < n; i++) {
        cin >> nome >> h;
        j.push_back({-h,nome});
        cin.ignore();
    }

    sort(j.begin(),j.end());

    vector<string> times[t];
    for(int i = 0; i < n; i++)
        times[i%t].push_back(j[i].second);

    for(int i = 0; i < t; i++)
        sort(times[i].begin(),times[i].end());

    for(int i = 0; i < t; i++) {
        cout << "Time " << i+1 << "\n";
        for(int j = 0; j < times[i].size(); j++)
            cout << times[i][j] << "\n";
        cout << "\n";
    }
    return 0;
}