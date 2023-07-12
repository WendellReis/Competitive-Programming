#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,d=0,x1,x2,y1,y2; cin >> n;
    while(n > 0){
        cin >> x1 >> y1 >> x2 >> y2;
        d+=(pow(x1-x2,2)+pow(y1-y2,2));
        n--;
    }

    cout << d << "\n";
    return 0;
}