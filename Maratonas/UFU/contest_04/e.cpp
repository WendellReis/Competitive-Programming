#include <bits/stdc++.h>

using namespace std;

long long fat(int n)
{
    if(n<2)return 1;
    else return n*fat(n-1);
}

int main()
{
    int N;

    while(cin >> N) cout << fat(N) << '\n';
    
    return 0;
}