#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    bool f = false;
    for(int i = s.size()-1; i>= 1; i--)
        if(s[i] > s[i-1]){
            swap(s[i],s[i-1]);
            sort(s.begin()+i,s.end());
            f = true;
            break;
        }
    if(f)
        cout << s;
    else
        cout << "0\n";
    return 0;
}