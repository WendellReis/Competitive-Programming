/*
    Problem Name: Segredo do Cofre
    Problem Link: https://neps.academy/br/exercise/16
    Author: Wendell R. M. Matias
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m; cin >> n >> m;

    vector<long long> v(n),prefix(n+1,0);
    vector<long long> freq(10,0);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    int ant = 0,p;
    for(int i = 0; i < m; i++){
        cin >> p;
        if(p > ant){
            prefix[ant+1]++;
            prefix[p+1]--;
        } else{
            prefix[ant]--;
            prefix[p]++;
        }
        ant = p;
    }

    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum+=prefix[i+1];
        freq[v[i]]+=sum;
    }

    for(int i = 0; i < 10; i++)
        cout << freq[i] << " ";
    cout << "\n";
    return 0;
}