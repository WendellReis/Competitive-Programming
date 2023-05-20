#include <bits/stdc++.h>

using namespace std;

int main()
{
    int V,maior=0,sum;
    vector<int> nums;

    while(cin >> V) nums.push_back(V);

    int tam = nums.size();

    for(int c=0;c<tam;c++)
    {
        sum=0;
        for(int i=c;i<tam;i++)
        {
            sum+=nums[i];
            if(sum>maior) maior=sum;
        }
    }

    cout << maior << '\n';

    return 0;
}