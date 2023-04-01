#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c;

    cin >> a >> b >> c;
    int sum = 0;
    for (int i = 0; i < c; i++)
    {
        sum+= (a + b*i);
    }
    cout << sum << endl;

    return 0;
}
