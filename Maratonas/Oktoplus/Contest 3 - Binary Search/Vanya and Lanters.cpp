#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,l,v; cin >> n >> l;

    vector<int> vet;
    for(int i = 0; i < n; i++){
        cin >> v;
        vet.push_back(v);
    }
    sort(vet.begin(),vet.end());
    double d = max((double)vet[0],(double)(l-vet[n-1]));
    for(int i = 1; i < n; i++)
        d = max(d,(double)(vet[i] - vet[i-1])*0.5);

    printf("%.10lf\n",d);
    return 0;
}