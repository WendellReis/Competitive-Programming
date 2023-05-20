#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin >> n >> p;
    int vet[n];
    for(int i = 0;i<n;i++)
    {
        cin >> vet[i];
        vet[i]+=p;
    }
    int maior=0;
    for(int i = 1;i<n;i++)
    {
        if(maior < vet[i] - vet[i-1])
            maior =  vet[i] - vet[i-1];
    }
    cout << maior << endl;
    return 0;
}
