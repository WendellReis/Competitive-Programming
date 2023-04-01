#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n=0;
    getline(cin >> ws, s);
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
            n += pow(2, s.size() - 1 - i);
    }
    cout << n << endl;

    return 0;
}