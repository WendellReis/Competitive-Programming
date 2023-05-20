#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long C, P;
    cin >> C >> P;
    while(C != 0) {
        long long mod4 = P/4;
        long long mod2 = (P-(mod4*4))/2;
        while(mod4 + mod2 != C) {
            mod4 -= 1;
            mod2 += 2;
        }

        cout << mod2 << " " << mod4 << endl;
        cin >> C >> P;
    }
    
    return 0;
}
