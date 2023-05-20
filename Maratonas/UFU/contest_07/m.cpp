#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int B, V;
    cin >> B >> V;
    while (B != 0 && V != 0)
    {
        int dec = V;
        int i = V;
        int count = 0;
        int pos = 0;
        while (pos != B)
        {
            if(dec == 0)
                break;

            pos += i;
            count++;
            if(pos == B)
                break;
            if(count == i) {
                i--;
                count = 0;
            }

            if(i == 0 || pos > B) {
                dec--;
                i = dec;
                count = 0;
                pos = 0;
            }

        }

        if (pos == B)
        {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }

        cin >> B >> V;
    }
    return 0;
}