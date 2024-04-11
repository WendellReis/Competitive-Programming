//Problem Link: https://judge.beecrowd.com/pt/problems/view/1029?origem=1

#include <bits/stdc++.h>

using namespace std;

#define tam 39

int main() {
    ios_base::sync_with_stdio();
    cin.tie(0);
    
    vector<int> fib(tam+1,0); fib[1] = 1;
    vector<int> calls(tam+1,0);

    for(int i = 2; i <= tam; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        calls[i] = 2 + calls[i-1] + calls[i-2];
    }

    int n; cin >> n;
    for(int i = 0,v; i < n; i++) {
        cin >> v;
        printf("fib(%d) = %d calls = %d\n",v,calls[v],fib[v]);
    }

    return 0;
}