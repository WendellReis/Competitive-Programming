#include <bits/stdc++.h>

using namespace std;

int main(){
    int q; cin >> q;
    string s1;

    while(q > 0){
        string s2;
        cin >> s1;
        cin >> s1;

        for(int i = s1.size()-1; i >= 0; i--){
            if(s1[i] != '0')
                s2.push_back((char)('a'+s1[i]-'1'));
            else{
                s2.push_back((char)('a'+s1[i-1]-'1'+10*(int)(s1[i-2]-'0')));
                i-=2;
            }
        }

        for(int i = s2.size()-1; i >= 0; i--)
            cout << s2[i];
        cout << "\n";
        q--;
    }
    return 0;
}