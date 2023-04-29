#include <bits/stdc++.h>

using namespace std;

long long fat(int n)
{
    if(n<2)return 1;
    else return n*fat(n-1);
}

int main()
{
    int N,D,X,C;

    cin >> N;

    for(int c=0;c<N;c++)
    {
        cin >> D >> X >> C;

        long long res = fat(D)/(fat(X)*fat(D-X));
        if(res<C) cout << "Existem menos combinacoes!\n";
        else if(res==C) cout << "Harry estah correto!\n";
        else cout << "Existem mais combinacoes!\n";
    }
    
    return 0;
}