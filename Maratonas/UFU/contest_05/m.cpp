#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    double n;
    vector<double> v;
    while(cin >> n)
        v.push_back(n);
    sort(v.begin(), v.end());
    int odd = 0, even = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if((int)v[i]%2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
    cout << fixed << setprecision(1);
    if(even >= odd) {
        int meio = v.size()%2 == 0 ? (v.size() / 2) - 1 : (v.size() / 2);
        cout << (double)(v[meio] + v[meio+1])/2 << endl;
    } else {
        int meio = v.size()%2 == 0 ? (v.size() / 2) - 1 : (v.size() / 2);
        cout << (double)v[meio] << endl;
    }
    return 0;
}