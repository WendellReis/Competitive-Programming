#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,d;
    while(cin >> n >> d) {
    int i = 2;
    long long menor = n<d?n:d;
    while(i <= menor) {
        if(n%i == 0 && d%i == 0) {
            n/=i;d/=i;
        } else {
            i++;
        }
        menor = n<d?n:d;
    }
    cout << n << " " << d << endl;
    }
}