#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    int div[] = {4,7,44,47,74,77,444,447,474,477,744,774,777};

    for(int i = 0; i < 6; i++)
        if(n%div[i] == 0){
            cout << "YES\n";
            return 0;
        }
    cout << "NO\n";
    return 0;
}