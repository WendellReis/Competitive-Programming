#include <bits/stdc++.h>

using namespace std;

int main(){
    string t,c; cin >> t >> c;
    
    int j = 0;
    for(int i = 0; j < t.size() && i < c.size(); i++)
        if(t[j] == c[i])
            j++;
    cout << j + 1 << "\n";
    return 0;
}