#include <bits/stdc++.h>

using namespace std;

int main(){
    long long q = 0, m = 0;
    string s;
    cin >> s;
    char c = s[0];

    for(int i = 0; i < s.size(); i++){
        if(s[i] == c) q++;
        else{
            if(q > m) m = q;
            q = 1;
            c = s[i];
        }
    }
    if(q > m) m = q;

    cout << m << endl;
    return 0;
}