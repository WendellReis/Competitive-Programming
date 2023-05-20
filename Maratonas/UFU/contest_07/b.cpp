#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,E,F,C,sum,tot;

    cin >> N;

    for(int c=0;c<N;c++)
    {
        tot=0;
        cin >> E >> F >> C;
        sum = E+F;
        while(true)
        {
            if(sum-C>=0)
            {
                sum=sum-C+1;
                tot++;
            }
            else break;
        }
        cout << tot << '\n';
    }
    
    return 0;
}