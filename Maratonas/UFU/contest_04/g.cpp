#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fatorial(ll n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*fatorial(n-1);
    }
}
int main()
{
    int n;
    while(cin >> n) {
        ll fat = fatorial(n-1);
        cout <<fat << endl;
    }
    
    return 0;
}