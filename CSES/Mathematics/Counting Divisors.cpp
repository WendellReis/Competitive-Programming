#include <bits/stdc++.h>

using namespace std;

int countDivisors(int n) {
    int count = 1;
    for(int x = 2; x*x <= n; x++)
        if(n%x == 0) {
            count+=2;
            if(x*x == n)
                count--;
        }

    if(n > 1)
        count++;
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    while(n--) {
        int v; cin >> v;
        cout << countDivisors(v) << "\n";
    }

    return 0;
}