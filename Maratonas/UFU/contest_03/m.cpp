#include <bits/stdc++.h>

using namespace std;

bool ehPalindromo(int a);

int main() {

    int a,b;
    while(cin >> a >> b) {
        int v[(b-a+1)];
        for (int i = a+1; i < b; i++)
            v[i-a-1] = i;

        int k = 0;
        int menor = b;
        while(k < b-a+1) {
            if(ehPalindromo(v[k])) {
                menor = v[k];
                break;
            }
            k++;
        }

        k = (b-a+1);
        int maior = b;
        while(k >= 0) {
            if(ehPalindromo(v[k])) {
                maior = v[k];
                break;
            }
            k--;
        }

        for (int i = 0; i < (b-a+1); i++)
        {
            if(ehPalindromo(v[i])) {
                if(v[i] < menor)
                    menor = v[i];
                if(v[i] > maior)
                    maior = v[i];
            }
        }
        if(ehPalindromo(menor) && ehPalindromo(maior)) {
            cout << menor << " " << maior << endl;
        } else {
            cout << -1 << endl;
        }
        
    }

    return 0;
}

bool ehPalindromo(int a) {
    string s = to_string(a);
    int f = s.size()-1;
    int i = 0;
    while(i < f) {
        if(s[f] != s[i])
            return false;
        i++;
        f--;
    }

    return true;
    
}
