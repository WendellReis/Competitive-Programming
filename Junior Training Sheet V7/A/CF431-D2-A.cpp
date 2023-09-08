#include <bits/stdc++.h>

using namespace std;

int main(){
    int v[4]; cin >> v[0] >> v[1] >> v[2] >> v[3];

    string s; cin >> s;
    int count = 0;
    for(int i = 0; i < s.size(); i++)
        count+=v[(int)s[i] - '1'];
    
    cout << count << "\n";
    return 0;
}