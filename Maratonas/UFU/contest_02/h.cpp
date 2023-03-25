#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N;
    vector<long long> nums;

    while(cin >> N) nums.push_back(N);

    sort(nums.begin(),nums.end());

    for(int c=0;c<nums.size();c++) cout << nums[c] << ' ';
    cout << '\n';
    for(int c=0;c<nums.size();c++) cout << nums[nums.size()-1-c] << ' ';
    cout << '\n';

    return 0;
}