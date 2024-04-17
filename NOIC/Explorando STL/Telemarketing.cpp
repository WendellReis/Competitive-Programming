//Problem Link: https://neps.academy/br/exercise/265

#include <bits/stdc++.h>

using namespace std;

#define par pair<int,int>
#define F first
#define S second

int main() {
    int n, l; cin >> n >> l;

    vector<int> v(l);
    for(int i = 0; i < l; i++)
        cin >> v[i];

    priority_queue<par, vector<par>, greater<par>> q;
    for(int i = 1; i <= n; i++)
        q.push({0,i});
    
    vector<int> qtd(n+1,0);
    for(int i = 0; i < l; i++) {
        par at = q.top(); q.pop();
        qtd[at.S]++;
        q.push({at.F+v[i],at.S});
    }

    for(int i = 1; i <= n; i++)
        printf("%d %d\n",i,qtd[i]);

    return 0;
}