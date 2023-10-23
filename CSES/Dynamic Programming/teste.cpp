#include <bits/stdc++.h>

using namespace std;

int main(){
    int INF = 10000000;
    int n = 31;
    int coins[] = {1,2,5,7};
    vector<int> value(100);
    value[0] = 0;
    int first[n+1];
    for (int x = 1; x <= n; x++) {
        value[x] = INF;
        for (auto c : coins) {
        if (x-c >= 0 && value[x-c]+1 < value[x]) {
                value[x] = value[x-c]+1;
                first[x] = c;
            }
        }
    }

    while (n > 0) {
        cout << first[n] << " ";
        n -= first[n];
    }
    return 0;
}