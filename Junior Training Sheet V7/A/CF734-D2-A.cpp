#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;

    int count = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A') count--;
        else count++;
    }

    if(count == 0) cout << "Friendship\n";
    else if(count > 0) cout << "Danik\n";
    else cout << "Anton\n";

    return 0;
}