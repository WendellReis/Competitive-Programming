#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    while(cin >> n)
    {
        for(int i = 1;i<=n/2;i++)
        {
            for(int j = i;j<=n/2;j++)
            {
                if(pow(i,2)+pow(j,2) == n)
                {
                    cout << i << " " << j << endl;
                }
            }
        }
    }
    return 0;
}