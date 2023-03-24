#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    bool p = true;
    cin >> s;   

    for(int i = 0; i < s.size(); i++)
        if(s[i] != s[s.size()-i-1])
            p=false;
        
    if(p) cout << "sim" << endl;
    else cout << "nao" << endl;
    return 0;
}