#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;
    ll sum = 0; // count the number of increaments
    cin >> n;
    ll array[n];
    
    for(ll i = 0; i < n; i++)
       cin >> array[i];
    
    for(ll i = 1; i < n; i++)
        if(array[i] < array[i-1]){
            ll dif = array[i-1]-array[i]; //difference between numbers
            sum+=dif;
            array[i]+=dif;
        }

    cout << endl <<  sum << endl;
    return 0;
}