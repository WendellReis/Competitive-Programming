#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N,A;
    set<int> nums;

    cin >> N;

    for(long long c=0;c<N;c++)
    {
        cin >> A;
        nums.insert(A);
    }

    cout << nums.size() << '\n';

    return 0;
}