//Problem Link: https://cses.fi/problemset/task/1619/
#include <bits/stdc++.h>

using namespace std;

bool cmp(int x, int y) {
    return abs(x) < abs(y);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<int> timeline;
    for(int i = 0,a,b; i < n; i++) {
        cin >> a >> b;
        timeline.push_back(a);
        timeline.push_back(-b);
    }

    sort(timeline.begin(),timeline.end(),cmp);
    int quant = 0, maxQuant = 1;
    for(int i = 0; i < timeline.size(); i++) {
        if(timeline[i] > 0) {
            quant++;
            maxQuant = max(maxQuant,quant);
        } else
            quant--;
    }    cout << maxQuant << "\n";

    return 0;
}