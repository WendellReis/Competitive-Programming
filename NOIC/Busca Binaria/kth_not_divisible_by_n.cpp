#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    long long a,b;
    for(int i = 0; i < t; i++){
        cin >> a >> b;
        cout << (long long)(b/(a-1))*a + b%a << "\n";
    }
    return 0;
}