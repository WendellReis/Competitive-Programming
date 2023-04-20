#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin >> n;
    
    ll sum = n*(n+1)/2; // somatorio dos numeros de 1 a n
    if(sum%2!=0) cout << "NO" << endl; // nao eh possivel dividir em 2 sets
    else{
        sum/=2; // valor do set
        set<ll> set1, set2;
        for(ll i = 1; i <= n; i++) set2.insert(i);
        ll k = n;
        while(sum>0){
            if(sum < k)
              k = sum;  
            set1.insert(k);
            set2.erase(k);
            sum-=k;
            k--;
        }

        cout << "YES" << endl << set1.size() << endl;
        for (auto i : set1)
            cout << i << ' ';
        cout << endl << set2.size() << endl;
        for (auto i : set2)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}