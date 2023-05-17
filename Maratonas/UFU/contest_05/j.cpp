#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool primo(ll n){
    if(n < 2) return false;
    ll q = 1;
    for(ll i = 2; i <= n/2; i++){
        if(n%i == 0) q++;
        if(q > 1) return false;
    }
    return true;    
}

vector<ll> primos(ll n) {
    vector<ll> vet_primos;
    for (ll i = 2; i <= n; i++) {
        if(primo(i)) {
            vet_primos.push_back(i);
        }
    }
    return vet_primos;
}

int main()
{
    ll N;

    cin >> N;

    ll i,res;

    for(i=N/2;i>=2;i--)
    {
        if(primo(i)) break;
    }

    vector<ll> v = primos(i);

    ll tam = v.size();

    for(i=tam-1;i>=0;i--)
    {
        if((N%v[i])==0)
        {
            for(ll j=0;j<=i;j++)
            {
                if(v[i]*v[j]==N)
                {
                    cout << 1 << '\n';
                    return 0;
                }
                if(v[i]*v[j]>N) break;
            }
        }
    }

    cout << 0 << '\n';

    return 0;
}