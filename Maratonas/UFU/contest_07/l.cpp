#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Q,D,P;
    cin >> Q >> D >> P;

    while(Q != 0) {
        long long sum3 = Q*D;
        long long sum5 = 0;
        while(sum5 < sum3) {
            sum5+=5;
            sum3+=3;
        }

        cout << sum3 << endl;
        cin >> Q;
        if(Q!= 0)
            cin >> D >> P;
    }

    return 0;
}