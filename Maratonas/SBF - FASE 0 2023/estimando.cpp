#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    int g[n],e[n];
    for(int i = 0; i < n; i++)
        cin >> g[i];
    
    for(int i = 0; i < n; i++)
        cin >> e[i];

    sort(g,g+n);
    sort(e,e+n);

    for(int i = 0; i < n; i++)
        cout << g[i] << " ";
    cout << endl;
    for(int i = 0; i < n; i++)
        cout << e[i] << " ";
    cout << endl;
    if(g[0] == g[n-1]){
        cout << g[0] - e[0] << "\n";
        cout << g[0] + e[0] << "\n";
    }else{
        if(g[0] + e[0] == g[n-1] - e[1])
            cout << g[0] + e[0] << "\n";
        else if(g[0] + e[1] == g[n-1] - e[0])
            cout << g[0] + e[1] << "\n";
        else if(g[0] + e[n-2] == g[n-1] - e[n-1])
            cout << g[0] + e[n-2] << "\n";     
        else if(g[0] + e[n-1] == g[n-1] - e[n-2])
            cout << g[0] + e[n-1] << "\n";
    }
    return 0;
}