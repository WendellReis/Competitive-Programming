#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;

    char aux = 'a';
    int sum = 0;

    for(int i = 0; i < s.size(); i++){
        int dif = abs(s[i] - aux);
        
        if(dif < 13)
            sum+=dif;
        else
            sum+=(26-dif);

        aux = s[i];
    }

    cout << sum << "\n";
    return 0;
}