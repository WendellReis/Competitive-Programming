#include <bits/stdc++.h>

using namespace std;

int mmc(int *v, int t){
    int mmc = 1, d = 2;
    while(true){
        bool s = true, u = true;
        for(int i = 0; i < t; i++)
            if(v[i] > 1){s=false;break;}
        if(s) break;

        for(int i = 0; i < t; i++)
            if(v[i]%d == 0){
                v[i]/=d;
                u = false;
            }
        if(u) d++;
        else mmc*=d;
    }
    return mmc;
}

int main()
{
    int N;

    while(cin >> N)
    {
        int v[N];
        for(int c=1;c<=N;c++)
        {
            v[c-1]=c;
        }
        cout << mmc(v,N) << '\n';
    }

    return 0;
}