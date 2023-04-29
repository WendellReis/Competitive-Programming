#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long mult= 1;
    for (int i = 0; i < n-1; i++)
        mult*=10;
    
    cout << mult << endl;    

    return 0;
}