#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fatorial(ll n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n*fatorial(n-1);
    }
}
int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        string nome;
        getline(cin >> ws, nome);
        int size = nome.size();
        int letras[26] = {0};
        for (int c = 0; c < size; c++) {
            nome[c] = tolower(nome[c]);
            letras[nome[c]-'a']++;
        }

        ll div = 1;

        for (int c = 0; c < 26; c++)
        {
            if(letras[c] > 1)
                div*= fatorial(letras[c]);
        }
        
        ll fat = fatorial(size);
        cout << fat / div << endl;
    }
    
    return 0;
}