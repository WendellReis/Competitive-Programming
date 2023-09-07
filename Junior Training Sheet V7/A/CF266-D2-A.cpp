#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;

    int at = 0, pos = 1, count = 0;
    while(pos < n){
        if(s[at] == s[pos])
            count++;
        else
            at = pos;
        pos++;
    }
    cout << count << "\n";
    return 0;
}
