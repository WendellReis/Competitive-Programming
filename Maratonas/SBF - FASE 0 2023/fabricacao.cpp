#include <bits/stdc++.h>

using namespace std;

string subString(string s, int ini, int fim){
    string res;
    for(int i = ini-1; i < fim; i++)
        res.push_back(s[i]);
    return res;
}

int main(){
    int n,m,q,a,b; cin >> n >> m;
    string dna,prot; cin >> dna >> prot;

    cin >> q;
    while(q > 0){
        int quant = 0;
        cin >> a >> b;
        string comp = subString(prot,a,b);
        int fim = b - a + 1, ini = 1;
        while(fim <= n){
            int k = 0;
            while(dna[k] != comp[0] && fim + k <= n)
                k++;
            fim = fim+k;
            ini = ini+k;
            if(fim <= n)
                if(strcmp(comp.c_str(), subString(dna,ini,fim).c_str()) == 0)
                    quant++;
            ini++;
            fim++;
        }
        cout << quant << "\n";
        q--;
    }
    return 0;
}