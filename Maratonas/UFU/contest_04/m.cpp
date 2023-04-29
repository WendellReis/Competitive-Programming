#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fatorial(int n, int k)
{
    if(n <= k)
    {
        return k;
    }
    else
    {
        return n * fatorial(n-1, k);
    }
}
int main()
{
    string palavra;
    getline(cin >> ws, palavra);
    int vogais = 0;
    int consoantes = 0;
    int freq[26] = {0};

    for (int i = 0; i < palavra.size(); i++)
    {
        if(palavra[i] > 64 && palavra[i] < 91) {
            freq[palavra[i]-'A']++;
            switch ((char)palavra[i])
            {
            case 'A':
                vogais++;
                break;
            case 'E':
                vogais++;
                break;
            case 'I':
                vogais++;
                break;
            case 'O':
                vogais++;
                break;
            case 'U':
                vogais++;
                break;
            default:
                consoantes++;
                break;
            }
        }
    }
    ll vogaisFat = fatorial(vogais, 1);
    ll divVogais = 1;

    ll consoantesFat = fatorial(consoantes, 1);
    ll divConsoantes = 1;
    for (int i = 0; i < 26; i++)
    {
        if(freq[i] > 1) {
            switch (i+'A')
                {
                case 'A':
                    divVogais*= fatorial( freq[i] , 1);
                    break;
                case 'E':
                     divVogais*= fatorial( freq[i] ,1);
                    break;
                case 'I':
                     divVogais*= fatorial( freq[i] ,1);
                    break;
                case 'O':
                    divVogais*= fatorial( freq[i] ,1);
                    break;
                case 'U':
                    divVogais*= fatorial( freq[i] ,1);
                    break;
                default:
                    divConsoantes*= fatorial( freq[i] ,1);
                    break;
                }
        }
    }
    cout << (vogaisFat/divVogais) * (consoantesFat/divConsoantes) << endl;
 
    return 0;
}