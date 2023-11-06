#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n; cin >> t;
    string s;
    while(t > 0){
        string sf;
        cin >> n;
        cin >> s;
        for(int i = n-1; i >= 0; i--){
            if(s[i] != '0')
                sf.push_back((char)('a'+s[i]-'1'));
            else{
                if(s[i-2] == '1')
                    sf.push_back((char)('a'+s[i-1]-'1'+10));
                else
                    sf.push_back((char)('a'+s[i-1]-'1'+20));
                i-=2;
            }
        }
        for(int i = sf.size()-1; i >= 0; i--)
            cout << sf[i];
        cout << "\n";
        t--;
    }
    return 0;
}