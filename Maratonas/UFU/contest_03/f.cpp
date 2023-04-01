#include <bits/stdc++.h>

using namespace std;

int mdc(vector<int> v) {

    int tam = v.size();
    int div = 2;
    int minDC = 1;
    int menor = v[0];
    for (int i = 1; i < tam; i++)
        if(v[i] < menor)
            menor = v[i];
    
    while(div <= menor) {

        bool allDiv = 1;
        for (int i = 0; i < 4; i++)
        {
            if(v[i]%div != 0) {
                allDiv = 0;
                break;
            }                
        }
        
        if(allDiv) {
            for (int i = 0; i < 4; i++)
                v[i] /=div;             
            minDC *= div;
        } else {
            for (int i = 1; i < tam; i++)
                if(v[i] < menor)
                    menor = v[i];
            div++;
        }
    }

    return minDC;
}

int main() {

    int a;
    vector<int> v;
    while(cin >> a) 
        v.push_back(a);
    
    cout << mdc(v) << endl;

    return 0;
}