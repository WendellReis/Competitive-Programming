#include <bits/stdc++.h>

using namespace std;

int main() {
    long long fat[21]; fat[0] = 1;

    for(int i = 1; i <= 20; i++)
        fat[i] = i*fat[i-1];

    int n,m;
    while(cin >> n >> m)
        cout << fat[n] + fat[m] << "\n";
    
    return 0;
}