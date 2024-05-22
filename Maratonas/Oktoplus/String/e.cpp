#include <bits/stdc++.h>

using namespace std;

bool compara(char c1, char c2) {
    char c1m = tolower(c1);
    char c2m = tolower(c2);

    if (c1m == c2m)
        return c1 < c2;
    return c1m < c2m;
}

int main(){
    int t; cin >> t;
    cin.ignore();

    while(t--) {
        string l; cin >> l;
        sort(l.begin(),l.end(), compara);

        do{
            cout << l << "\n";
        } while(next_permutation(l.begin(),l.end(), compara));
    }
    
    return 0;
}