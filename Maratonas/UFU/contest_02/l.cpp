#include <bits/stdc++.h>

using namespace std;

struct seq
{
    int n;
    int f;
};

int main()
{

    int N;
    cin >> N;
    int aN = 0;
    int rN = 0;
    int seqA = 0;
    int sequencia = 0;
    vector<seq> numeros;

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        if (i == 0)
            rN = n;
        if (rN != n)
        {
            if (sequencia > seqA) {
                seqA = sequencia;
            }
            int found =0;
            for (int c = 0; c < numeros.size(); c++)
            {
                if(numeros[c].n == rN) {
                    found = 1;
                    if( numeros[c].f < sequencia)
                        numeros[c].f = sequencia;
                    break;
                }
            }
            if(!found) {
                seq F;
                F.f = sequencia;
                F.n = rN;
                numeros.push_back(F);
            }
            rN = n;
            sequencia = 1;
        }
        else
        {
            rN = n;
            sequencia++;
        }
        if(i == N-1) {
            int found =0;
            for (int c = 0; c < numeros.size(); c++)
            {
                if(numeros[c].n == rN) {
                    found = 1;
                    if( numeros[c].f < sequencia)
                        numeros[c].f = sequencia;
                    break;
                }
            }
            if(!found) {
                seq F;
                F.f = sequencia;
                F.n = rN;
                numeros.push_back(F);
            }
        }
    }

    for (int i = 0; i < numeros.size(); i++)
    {
        if (numeros[i].f == seqA)
            cout << numeros[i].n << " ";
    }

    return 0;
}