#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        double A1, A2, V1, V2;
        cin >> A1 >> V1 >> A2 >> V2;
        double valor = V2-V1;
        valor /= (A2-A1);
        cout << fixed;
        valor*= 100;
        long long v = valor;
        double v2 = v;
        v2 /= 100;
        printf("%.2lf\n", v2);
    }
    
    
    return 0;
}