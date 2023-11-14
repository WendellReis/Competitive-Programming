#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a,b,c;
    int t; cin >> t;
    while(t > 0){
        cin >> a >> b >> c;
        if(c%2 == 0){
            if(a > b)
                cout << "First\n";
            else
                cout << "Second\n";
        } else{
            if(a >= b)
                cout << "First\n";
            else
                cout << "Second\n";
        }
        t--;
    }
    return 0;
}