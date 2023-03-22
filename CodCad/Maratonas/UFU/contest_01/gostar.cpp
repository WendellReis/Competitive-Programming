#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main(){
    string s;

    for(int v = 0; v < 6; v++){
        cin.ignore();
        getline(cin, s);
        vector<char> frase;
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 65 && s[i] <= 90) frase.push_back(s[i]+32);
            else if(s[i] >= 97 && s[i] <= 122) frase.push_back(s[i]);
            else if(s[i] != 32 && s[i] != '.' && s[i] != '!') frase.push_back('i');
        }

        bool p = true;
        cout << endl;
        for(int i = 0; i < frase.size(); i++) cout << frase[i];
        for(int i = 0; i < frase.size(); i++)
            if(frase[i] != frase[s.size()-i-1]) p=false;
        if(p) cout << "sim" << endl;
        else cout << "nao" << endl;
    }
    
    return 0;
}