#include <bits/stdc++.h>

using namespace std;

int div(int n, set<int> &s) {
    if(n == 1)
        return 1;
    int q = 1;
    for(int i = 1; i*i <= n; i++)
        if(n%i==0) {
            s.insert(i*n);
            i++;
        }

    return q;
}

int main() {
    int n; cin >> n;

    int count = n*n/2 + 1,k = 1;
    set<int> s;
    for(int i = 1; i <= n; i++)
        s.insert(i);
    
    while(count > 0) {
        while(s.find(k) == s.end())
            k++;
        count-=div(k,s);
        k++;
        printf("a");
    }

    cout << k << "\n";

    vector<int> v;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            v.push_back(i*j);
    sort(v.begin(),v.end());
    for(auto u : v)
        cout << u << " ";
    cout << endl;
    cout << "res = " << v[(int)v.size()/2] << endl;

    return 0;
}