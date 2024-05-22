//Link do Problema: https://neps.academy/br/exercise/249
#include <bits/stdc++.h>

using namespace std;

int m = 1;

bool compara(int a, int b) {
    int qa = a%m;
    int qb = b%m;

    if(qa == qb)
        return a>b;

    return qa > qb;
}

int main(){
    int n; cin >> n >> m;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(),v.end(),compara);
    for(int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << "\n";
    return 0;
}
