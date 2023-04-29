#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    long long ant=1,atu=1,aux;

    cin >> N;

    cout << 1 << "*\n";

    for(int c=1;c<N;c++)
    {
        if(c!=1)
        {
            aux = atu;
            atu = atu+ant;
            ant = aux;
        }
        for(int d=0;d<c;d++)
        {
            cout << atu << ' ';

            aux = atu;
            atu = atu+ant;
            ant = aux;
        }
        cout << atu << "*\n";
    }
    
    return 0;
}