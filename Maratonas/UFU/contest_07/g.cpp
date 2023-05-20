#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    for(ll i = 0;i<n;i++)
    {
        ll a,b,sum=0;
        cin >> a >> b;
        for(ll j = a;j<=b;j++)
        {
            sum+=j;
        }
        cout << sum << endl;
    }
    return 0;
}