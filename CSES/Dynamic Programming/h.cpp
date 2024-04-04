#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,d,y; cin >> x;

    while(x != 0) {
        cin >> d >> y;
        cout << (int)(-d/(pow(y,-1)-pow(x,-1))) << "\n";
        cin >> x;
    }
    return 0;
}