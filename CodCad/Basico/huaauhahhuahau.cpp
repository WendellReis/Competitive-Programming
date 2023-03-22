#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    char v[s.size()], tam = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            v[tam] = s[i];
            tam++;
        }
    for(int i = 0; i < tam/2; i++)
        if(v[i] != v[tam-1-i]){
            cout << "N" << endl;
            exit(1);
        }
    cout << "S" << endl;
    return 0;
}