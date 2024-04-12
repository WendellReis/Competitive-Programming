//Problem Link:https://vjudge.net/problem/UVA-484

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    vector<int> hist;
    map<int,int> m;
    while(cin >> n) {
        if(m.find(n) != m.end())
            m[n]++;
        else {
            m[n] = 1;
            hist.push_back(n);
        }
    }

    for(auto u : hist)
        cout << u << " " << m[u] << "\n";
    return 0;
}