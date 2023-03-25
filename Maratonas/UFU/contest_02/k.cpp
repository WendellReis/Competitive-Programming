#include <bits/stdc++.h>

using namespace std;

int main()
{
    string aux;
    vector<string> musicas;

    while (getline(cin,aux)) musicas.push_back(aux);

    sort(musicas.begin(),musicas.end());

    for(int c=0;c<musicas.size();c++) cout << musicas[c] << '\n';

    return 0;
