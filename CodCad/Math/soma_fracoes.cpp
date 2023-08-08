#include <bits/stdc++.h>
#define ull unsigned long long

using namespace std;

ull mdc(ull a, ull b){
    if(a%b == 0)
        return b;
    return mdc(b,a%b);
}

int main(){
    ull a,b,c,d; cin >> a >> b >> c >> d; // a/b + c/d = (ad + cb)/bd
    ull md = mdc(a*d + c*b,b*d);
    cout << (a*d + c*b)/md << " " << b*d/md << "\n";
    return 0;
}