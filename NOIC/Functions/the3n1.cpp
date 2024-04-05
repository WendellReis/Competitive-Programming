#include <bits/stdc++.h>

using namespace std;

int count(long long n) {
    int q = 1;

    while(n != 1) {
        if(n%2==1) n = 3*n + 1;
        else n/=2;
        q++;
    }

    return q;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long i,j;

    while(cin >> i >> j) {
        int m = 1;
        
        for(int n = min(i,j); n <= max(i,j); n++)
            m = max(m,count(n));

        cout << i << " " << j << " " << m << "\n";
    }
    return 0;
}
