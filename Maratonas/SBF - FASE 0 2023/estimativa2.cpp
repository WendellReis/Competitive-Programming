#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    int g[n],e[n];
    vector<int> num;
    for(int i = 0; i < n; i++)
        cin >> g[i];

    for(int i = 0; i < n; i++)
        cin >> e[i];

    for(int i = 0; i < n; i++){
        num.push_back(g[i] + e[i]);
        num.push_back(g[i] - e[i]);
    }
    int cont = 1;
    sort(num.begin(),num.end());
    int prev = num[0];
    for(int i = 1; i < 2*n; i++){
        cout << num[i] << "(" << cont << ") ";
        if(num[i] == prev)
            cont++;
        else{
            if(cont == n)
                cout << prev << "\n";
            cont = 1;
            prev = num[i];
        }
    }
    if(cont == n)
        cout << prev << "\n";
    return 0;
}