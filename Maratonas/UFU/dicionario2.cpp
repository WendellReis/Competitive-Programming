#include <bits/stdc++.h>

using namespace std;

void toLowerSrt(string &s);

int main(){
    string s;
    getline(cin,s);
    toLowerSrt(s);


    
    return 0;
}

void toLowerSrt(string &s){
    for(int i = 0; i < (int)s.size(); i++)
        s[i] = tolower(s[i]);
}
