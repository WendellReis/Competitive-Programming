#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fatorial(int n, int k)
{
    if(n <= k)
    {
        return k;
    }
    else
    {
        return n * fatorial(n-1, k);
    }
}
int main()
{
    int a, b;
    while(cin >> a >> b) {
        ll na = fatorial(a , a-b+1);
        ll nb = fatorial(b , 1);
        cout << na/nb << endl;
    }
    
    return 0;
}