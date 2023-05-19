#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> fib;
    fib.push_back(0);
    fib.push_back(1);
    long long n;
    while(cin >> n){
        if(n >= fib.size())
            for(long long i = fib.size()-1; i <= n; i++)
                fib.push_back((fib[i-1]+fib[i])%10);
        cout << fib[n] << "\n";
    }
    return 0;
}