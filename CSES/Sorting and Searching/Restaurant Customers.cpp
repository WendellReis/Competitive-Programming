/*
    CSES Problem Set
    https://cses.fi/problemset/task/1619
*/
#include <bits/stdc++.h>

using namespace std;

bool cmp(int x, int y){
    return abs(x) < abs(y);
}

int main(){
    int n; cin >> n;

    vector<int> events;
    int a,b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        events.push_back(a);
        events.push_back(-b);
    }

    sort(events.begin(),events.end(),cmp);

    int maximum = 0, ant = -1, count = 0, sz = events.size();
    for(int i = 0; i < sz; i++){
        if(abs(events[i]) != ant){
            maximum = max(maximum,count);
            ant = abs(events[i]);
        }

        if(abs(events[i] > 0))
                count++;
            else
                count--;
    }

    cout << max(maximum,count) << "\n";
    return 0;
}