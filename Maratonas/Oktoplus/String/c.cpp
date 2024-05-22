#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s; getline(cin,s);

        bool pass = false;
        string r = " " + s + " ";

        for(int i = 1; i+3 < r.size(); i++) {
            if(r[i-1] == ' ' && r[i] == 'n' && r[i+1] == 'o' && r[i+2] == 't' && r[i+3] == ' ') {
                pass = true;
                break;
            }
        }

        if(pass) cout << "Real Fancy\n";
        else cout << "regularly fancy\n";

    }

    return 0;
}

