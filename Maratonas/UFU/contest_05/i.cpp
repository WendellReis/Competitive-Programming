#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long i, o;
    cin >> i;
    o = i;
    long long d = 2;
    vector<long long> divisores;
    while (d <= o)
    {
        if (i % d == 0)
        {
            if (divisores.size() > 0)
            {
                if (divisores.size() > 2)
                {
                    for (int c = 0; c < divisores.size(); c++)
                        i *= divisores[c];
                    if (divisores[divisores.size() - 1] == d - 1)
                        d = divisores[0];
                    else
                        d-=1;
                    divisores.clear();
                }
                else
                {
                    if (divisores[divisores.size() - 1] == d - 1)
                    {
                        i /= d;
                        divisores.push_back(d);
                    }
                    else
                    {
                        for (int c = 0; c < divisores.size(); c++)
                            i *= divisores[c];
                        divisores.clear();
                        d -= 1;
                    }
                }
            }
            else
            {
                divisores.push_back(d);
                i /= d;
            }
        }
        else
        {
            for (int c = 0; c < divisores.size(); c++)
                i *= divisores[c];
            divisores.clear();
        }
        d++;
        if (divisores.size() == 3)
            if (i == 1)
                break;
    }
    if (divisores.size() == 3 && i == 1)
    {
        for (int c = 0; c < 3; c++)
            cout << divisores[c] << " ";
    }
    else
    {
        cout << 0;
    }
    cout << endl;
    return 0;
}