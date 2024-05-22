#include <bits/stdc++.h>

using namespace std;

int main() {
    string a,b;

    cin >> a >> b;
    int sa = 0, sb = 0;
    for(int i = 0; i < a.size(); i++)
        if(tolower(a[i]) > tolower(b[i])) {
            cout << "1\n";
            return 0;
        } else if(tolower(a[i]) < tolower(b[i])){
            cout << "-1\n";
            return 0;
        }
    cout << "0\n";
        
    return 0;
}

