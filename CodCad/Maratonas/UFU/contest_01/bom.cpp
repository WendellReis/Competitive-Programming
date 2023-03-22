#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string s;
    char c;
    int q = 0;

    cin >> c;
    cin.ignore();
    getline(cin, s);

    for(int i = 0; i < s.size(); i++)
        if(s[i] == c || (c < 91 && s[i] == c+32) || (c > 97 && s[i] == c-32))
            q++;

    cout << q << endl;
    return 0;
}