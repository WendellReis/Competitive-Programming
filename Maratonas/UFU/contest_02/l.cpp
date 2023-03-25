#include <bits/stdc++.h>

using namespace std;

int main() {

    int N;
    cin >> N;
    int numeros[N] = {0};

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        numeros[n]++;
    }

    int maior = 0;
    for (int i = 1; i < N; i++)
    {
        if(numeros[i] > numeros[maior])
            maior = i;
    }

    cout << maior << endl;


    return 0;
}