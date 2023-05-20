#include<bits/stdc++.h>
using namespace std;
int main()
{
    int valor, n;
    cin >> valor >> n;
    int moedas[n];
    for(int i = 0;i<n;i++)
    {
        cin >> moedas[i];
    }
    for(int i = 0;i<n-1;i++)
    {
        if(valor == moedas[i+1]+moedas[i])
        {
            cout << "S" << endl;
            return 0;
        }
    }
    cout <<"N" << endl;
    return 0;
}