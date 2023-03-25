#include <bits/stdc++.h>

using namespace std;

int main() {

    int alfabeto[26] = {0};
    string frase;
    getline(cin >> ws, frase);

    for (int i = 0; i < frase.size(); i++)
    {
        alfabeto[(int)(frase[i]-97)] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if(alfabeto[i] == 0) {
            cout << (char)(i+97) << endl;
        }
    }

    return 0;
}