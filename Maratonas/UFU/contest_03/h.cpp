#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,A;
    
    cin >> N;

    double soma=0;

    for(int c=0;c<N;c++)
    {
        cin >> A;
        soma+=A;
    }

    printf("%.2f\n",soma/N);
    
    return 0;
}