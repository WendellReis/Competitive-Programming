#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int freq[26] = {0};
    
    for(int i = 0; i < s.length(); i++)
        freq[(int)(s[i]-'A')]++;

    bool p = true;
    int odd_freq = 0;
    char odd = '!';
    for(int i = 0; i < 26; i++){
        if(freq[i]%2 == 1){
            odd_freq++;
            if(odd_freq > 1){
                p = false;
                break;
            }
            odd = (char)('A' + i);
            freq[i]--;
        }
    }

    if(p){
        for(int i = 0; i < 26; i++)
            for(int j = 1; j <= freq[i]/2; j++)
                cout << (char)('A'+i);
        if(odd != '!')
            cout << odd;
        for(int i = 25; i >= 0; i--)
            for(int j = 1; j <= freq[i]/2; j++)
                cout << (char)('A'+i);
        cout << "\n";
    } else
        cout << "NO SOLUTION\n";

    return 0;
}